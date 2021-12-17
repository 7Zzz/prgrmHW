t = int(input())
c = [0]*t
 
def error() :
    print('NO')
 
 
v = [[10e9, -1]]
index = 0
for _ in range(t+t) :
    q = input()
    if q[0] == '+' :
        v.append([0, index])
        index += 1
        continue
    n = int(q.split()[1])
    if v[-1][0] > n:
        print('NO')
        break
    c[v.pop()[1]] = n
    v[-1][0] = max(n, v[-1][0])
 
print('YES')
s = ""
for i in range(0, t):
    s = s + str(c[i]) + " "
print(s)