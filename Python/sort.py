a = list(map(int,input("NHAP DAY:").strip().split()))

def qsort(arr):
    if len(arr)<=1:
        return arr
    else:
        pivot = arr[len(arr)//2]

        left = [x for x in arr if x < pivot]
        middle = [x for x in arr if x == pivot]
        right = [x for x in arr if x > pivot]
    return qsort(left)+middle+qsort(right)

print(qsort(a))