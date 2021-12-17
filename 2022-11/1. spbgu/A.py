A = int(input())
f = 0
for B in range(0, 2*10**9):
    if A^B == A&B:
        f = 1
        print(B)
        break
if f == 0:
    print(-1)