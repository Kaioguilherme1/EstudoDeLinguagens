#auth kaio Guilherme
train = []
swaps = 0
size = []

def partition(list, low, high):
    i = low
    pivot = list[high]
    for j in range(low, high):
        if list[j] <= pivot:
            list[i], list[j] = list[j], list[i]
            i += 1
            global swaps
            swaps += 1
            

    list[i], list[high] = list[high], list[i]
    swaps += 1
    return i


def quick_sort(list, low, high):
    if low < high:
        partition_index = partition(list, low, high)
        quick_sort(list, low, partition_index - 1)
        quick_sort(list, partition_index + 1, high)

num_cases = int(input(""))

for i in range(0, num_cases):
    size.append(int(input("")))
    entry = input("")
    train.append(entry.split(" "))
    train[i] = list(map(int, train[i]))

for i in range(0, num_cases):
    quick_sort(train[i],0, size[i]-1)
    print("Optimal train swapping takes {} swaps.".format(swaps))
    swaps = 0