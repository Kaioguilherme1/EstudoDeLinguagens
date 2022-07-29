#Fila

def comando(fila,T, I, X):
    if(T == 1):
        alturaP = fila[I-1]
        position = 0
        for i in range(0, I - 1):
            if(alturaP < ((fila[i]) + X) and (position - 1) < i):
                position = i + 1
        print(position)
    elif(T == 0):
        fila.insert(I, X)



num = int(input(""))
entry = input("")

entryvet = entry.split(" ")
fila = list(map(int, entryvet))
num_comands = int(input(""))
comands = []

# o caso de teste deste desafio contradiz a especificação da função

for i in range(0, num_comands):
    comand_entry = input("")
    comands_char = comand_entry.split(" ")
    comands.append(list(map(int, comands_char)))

for i in comands:
    comando(fila, i[0], i[1], i[2])

#print(fila)