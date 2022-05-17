from unittest import result


def countSort(A):
    # procurar o maximo
    maxElement = max(A)
    C = [0] * (maxElement + 1)

    #contar os elementos 
    for a in A:
        C[a] += 1
    
    result = []
    for j in range(len(C)):
        for i in range(C[j]):
            result.append(j)    

    return result


Arrayinput = [8, 4, 0, 2, 8, 0, 3, 9, 3, 0, 1]
ArrayFinal = countSort(Arrayinput)
print(Arrayinput)
print(ArrayFinal)

# [8, 4, 0, 2, 8, 0, 3, 9, 3, 0]

# [3, 1, 1, 2, 1, 0, 0, 0, 2, 1 ]