def countingSort(A):
  # Encontra maximo de A
  maxElement= max(A)
  
  # Inicializa C com (max+1) zeros 
  C = [0] * (maxElement+1)
  
  # Conta os elementos
  for a in A: 
    C[a] += 1
  
  print(C)
  
  result = []
  for i in range(len(C)):
    for j in range(C[i]):
      result.append(i)
  
  return result


inputArray = [2,3,6,2,0,4,8,1,9,3,7,6]
print(inputArray)
sortArray = countingSort(inputArray)
print(sortArray)



# A = [2,3,6,2,0,4,8,1,9,3,7,6]

#           0 1 2 3 4 5 6 7 8 9
# counts = [0,0,0,0,0,0,0,0,0,0]

#           0 1 2 3 4 5 6 7 8 9
# counts = [1,1,2,2,1,0,2,1,1,1]