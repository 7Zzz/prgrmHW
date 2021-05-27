#include <iostream>
#define MOD 1000000007

using namespace std;

long long arr2[405][405], arr[405], arr1[405][405];

long long big_ncr(int n, int r){
    long long ret = 1;
    for (int i = n-r+1; i <= n; i++)
        ret = (ret * i) % MOD;
    for (int i = 1; i <= r; i++)
        ret = (ret*arr[i]) % MOD;
    return ret;
}
int main()
{
    int n,k;
    cin >> n >> k;
    arr2[0][0] = 1;
    for (int i = 1;i <= 2*k; i++)
    {
        arr1[i][0] = 1;
        arr2[i][0] = 1;
        for (int j = 1; j <= 2*k; j++){
            arr1[i][j] = (arr1[i-1][j] + (i-1)*arr1[i-1][j-1]) % MOD;
            arr2[i][j] = (arr2[i-1][j] + arr2[i-1][j-1]) % MOD;
        }
    }
    arr[1] = 1;
    for (int i = 2;i <= 2*k; i++)
        arr[i] = arr[MOD%i]*(MOD-MOD/i) % MOD;
    int ans[] = {1,0};
    for (int j = 1; j <= k; j++){
        for (int i = 1; i <= min(n,2*j); i++){
            int cnt = 0;
            for (int f = 0; f <= i; f++)
                cnt = (cnt + (f%2? -1:1)*arr2[i][f]*arr1[i-f][j] % MOD + MOD) % MOD;
            ans[j%2] = (ans[j%2] + big_ncr(n,i)*cnt) % MOD;
        }
        cout << ans[j%2];
    }
}
