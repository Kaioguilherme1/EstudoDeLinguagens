lista_sequencial = []


def count_sort_letters(array, size, col, base, max_len):
  output = [0] * size
  count = [0] * (base + 1) 
  min_base = ord('a') - 1 

  for item in array:  
    
    letter = ord(item[col]) - min_base if col < len(item) else 0
    count[letter] += 1

  for i in range(len(count)-1):   
      count[i + 1] += count[i]

  for item in reversed(array):
    
    letter = ord(item[col]) - min_base if col < len(item) else 0
    output[count[letter] - 1] = item
    count[letter] -= 1

  return output


def radix_sort_letters(array, max_col=None):
  
  if not max_col:
    max_col = len(max(array, key=len))  

  for col in range(max_col-1, -1, -1):  
    array = count_sort_letters(array, len(array), col, 26, max_col)

  return array

with open("entrada.txt", "r") as arquivo:
    sequencia = arquivo.read()
    lista_sequencial = sequencia.split(" ")

lista = radix_sort_letters(lista_sequencial)

count = 0
print(lista)
with open("saida.txt", "w") as arquivo:
    for i in range(0, len(lista)):
        if count == 6:
            arquivo.write(" {}\n".format(lista[i]))
            count = 0
        else:
            arquivo.write(" {}".format(lista[i]))
            count += 1
    
