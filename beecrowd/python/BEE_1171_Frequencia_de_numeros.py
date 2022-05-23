#auth kaio Guilherme
arr = []

def counting(arr, size):
    output = [0] * size

    # count array initialization
    count = [0] * int(max(arr) + 1)

    # storing the count of each element
    for m in range(0, size):
        count[arr[m]] += 1

    return count

    
size = int(input(""))

for n in range(0 ,size):
    arr.append(int(input("")))

arr_result = counting(arr, size)

for i in range(0, len(arr_result)):
    if arr_result[i] != 0:
        print("{} aparece {} vez(es)".format(i, arr_result[i]))



