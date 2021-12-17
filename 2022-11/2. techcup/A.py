t = int(input())

for _ in range(t):
    n = int(input())
    arr = [int(il) for il in input().split()]
    j = 0
    S = ""
    while j+1 <= n:
        S = S + str(-arr[j+1]) + " " + str(arr[j]) + " "
        j+=2
    print(S)