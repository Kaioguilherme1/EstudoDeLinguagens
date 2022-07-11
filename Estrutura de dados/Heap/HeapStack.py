#author Kaio Guilherme
class heap:
    def __init__(self, maxsize):
        self.maxsize = maxsize
        self.array = []
        self.size = 0

    def maxHeapfy(self, i):

        e = 2*i + 1
        d = 2*i + 2

        if e <= self.size - 1 and self.array[e] > self.array[i]:
            maior = e
        else:
            maior = i
        if d <= self.size - 1 and self.array[d] > self.array[maior]:
            maior = d
        if maior != i:
            self.array[i], self.array[maior] = self.array[maior], self.array[i]
            self.maxHeapfy(maior)



    def buildHeap(self):
        heapSize = self.size - 1
        for i in range(heapSize//2, -1, -1):
            self.maxHeapfy(i)

    def insert(self, value):
        # Verifica se cabe mais informação
        if self.size < self.maxsize:
            # 1:caso esteja vazio
            if self.size == 0:
                self.array.append(value)
                self.size = self.size + 1
                return True
            # 2:caso não esteja vazio

            if self.size != 0:
                self.array.append(value)
                self.size = self.size + 1
                self.buildHeap()
                return True
    
    def printHeap(self):
        print(self.array)

    def printTreeheap(self, level=0, i=0):
        if i < self.size:
            self.printTreeheap(level + 1, 2 * i + 2)
            print(' ' * 4 * level + '-> ' + str(self.array[i]))
            self.printTreeheap(level + 1, 2 * i + 1)
    
    def getArray(self):
        return self.array

    def dequeue(self):
        return self.array[0]
        self.array







# Verifica se e um heap valido
def isMaxheap(array, index = 0):
    L = 2 * index + 1
    R = 2 * index + 2

    #caso o index esquerdo ou direiro for maior que o tamanho do array
    if L > len(array)-1 or R > len(array)-1:
        return True
    

    if (array[index] >= array[L]) and (array[index] >= array[R]) and isMaxheap(array, L) and isMaxheap(array, R):
        return True

    return False

    


heapVerdadeiro = [78,70,39,66,50,18,28,60,33,39]
heapFalso = [10, 20, 30, 40, 50,60]

print('heapVerdadeiro')
print(isMaxheap(heapVerdadeiro))
print('heapFalso')
print(isMaxheap(heapFalso))
print("============================")
print('Entrada')
print(heapFalso)
print("saida")
heap = heap(6)
heap.insert(10)
heap.insert(20)
heap.insert(30)
heap.insert(40)
heap.insert(50)
heap.insert(60)
heap.printHeap()
print("E um heap")
print(isMaxheap(heap.getArray()))
print("============================")
heap.printTreeheap()

