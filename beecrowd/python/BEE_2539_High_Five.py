#auth kaio Guilherme
order = []
high_five = 0

size = int(input(""))
entry = input("")
order = entry.split(" ")
order = list(map(int, order))



count = [0] * int(max(order) + 1)

for m in range(0, int(max(order) + 1)):
    try:
        count[m] = order.index(m)
    except:
        count[m] = None

decremento = 0

for i in range(0, len(count)):
    if count[i] != None:
        high_five += (size - count[i] - 1)
        #decremento += 1
        count[i] = None
        #size -= 1
    
        
print(order)
print(count)
print(high_five)