def my_sqrt(num):
    start = 0.0
    end = num
    sqrt = 0.0
    acc = 0.01

    while start <= end:
        mid = ((start + end) / 2)
        sqrt = mid
        # printf("sqrt = %f\n", sqrt)
        if abs(mid * mid -num) <= acc:
            break
        elif mid * mid < num:
            start = mid
        else:
            end = mid
    return sqrt
print (my_sqrt(12))