#include <iostream>

int main() {
    int num = 0;
    scanf("%d", &num);
    if (num != 2 && num % 2 == 0)
	printf("YES");
    else
	printf("NO");
    return 0;    
}
