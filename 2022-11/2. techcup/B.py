def newTechnique(n, m, rows, columns):
    ans = []
    row = rows[0][0]
 
    for x in range(m):
        if row in columns[x]:
            break
 
    colomn = columns[x]
 
    rowDict = {}
    for x in rows:
        rowDict[x[0]] = x
 
    for x in range(n):
        ans.append(rowDict[colomn[x]])
 
    return ans
 
t = int(input())
final = []
for _ in range(t):
    n,m = map(int,input().split())
    rows = []
    for x in range(n):
        rows.append(list(map(int,input().split())))
    columns = []
    for x in range(m):
        columns.append(list(map(int,input().split())))
 
    final.append(newTechnique(n,m,rows,columns))
 
for _ in range(t):
    for x in final[_]:
        for y in x:
            print(y, end = " ")
        print()