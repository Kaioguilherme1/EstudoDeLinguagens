#auth kaio Guilherme

people = []
size = []


def partition(list, low, high):
    i = low
    pivot = list[high]
    for j in range(low, high):
        if list[j] <= pivot:
            list[i], list[j] = list[j], list[i]
            i += 1
           

    list[i], list[high] = list[high], list[i]
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
    people.append(entry.split(" "))
    people[i] = list(map(int, people[i]))


for i in range(0, num_cases):
    
    quick_sort(people[i],0, len(people[i]) - 1)
    print(' '.join(str(x) for x in people[i]))
    

       

