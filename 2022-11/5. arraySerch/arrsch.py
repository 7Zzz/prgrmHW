
l = [1,2,3,6,8,9,123,1235,53265,344234]
num = 1223

f = -1

start, end = 0, (len(l) - 1)
while start <= end:
    mid = (start + end) // 2
    if num == l[mid]:
        print(l[mid])
        f = 1
    if num < l[mid]:
        end = mid - 1
    else:
        start = mid + 1
if f != 1:
    print("(((")
