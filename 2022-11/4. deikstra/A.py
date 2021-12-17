n, s, f = [int(i) for i in input().split()]

take = {}
chk = {}
l = []
max = 101 * 100

for i in range(n):
    l.append([int(j) for j in input().split()])
    take[i] = max
    chk[i] = False

take[s - 1] = 0


for i in range(n):
    pos = 0
    for j in range(n):
        if (not chk[j]) and (pos == 0 or take[j] < take[i]):
            pos = j
    if take[pos] == max:
        break
    chk[pos] = True
    g = []
    for y in range(n):
        t = l[pos][y]
        if t > 0:
            g.append((y, t))
    for (first, second) in g:
        take[first] = min(take[first], take[pos]+second)


ans = take[f - 1]
if ans == max:
    print(-1)
else:
    print(ans)
