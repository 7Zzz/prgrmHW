take = {}
chk = {}
l = []
max = 101 * 100

n = int(input())
r = [int(t) for t in input().split()]
mq = int(input())

for i in range(mq):
	a,b = input().split()
	l.append((int(a)-1,int(b)-1))

for i in range(n):
	take[i] = max
	chk[i] = False

take[0] = 0

for i in range(n):
	pos = 0
	for j in range(n):
		if (not chk[j]) and (pos == None or take[j] < take[pos]):
			pos = j
	if take[pos] == max:
		break
	chk[pos] = True
	arr = []
	for y in range(mq):
		(a,b) = l[y]
		if a == pos:
			arr.append(b)
		elif b == pos:
			arr.append(a)
	for k in arr:
		take[k] = min(take[k], take[pos]+r[k])

ans = take[n-1]
if ans == max:
	print(-1)
else:
	print(ans+r[0]-r[-1])

