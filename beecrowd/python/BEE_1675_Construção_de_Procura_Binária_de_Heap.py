#author Kaio Guilherme
class heap:
    def __init__(self, maxsize):
        self.maxsize = maxsize
        self.array = []
        self.size = 0

    def maxHeapfy(self, i):

        e = 2*i + 1
        d = 2*i + 2

        if e <= self.size - 1 and self.array[e][0] > self.array[i][0]:
            maior = e
        else:
            maior = i
        if d <= self.size - 1 and self.array[d][0] > self.array[maior][0]:
            maior = d
        if maior != i:
            self.array[i], self.array[maior] = self.array[maior], self.array[i]
            self.maxHeapfy(maior)

    def buildHeap(self):
        heapSize = self.size - 1
        for i in range(heapSize//2, -1, -1):
            self.maxHeapfy(i)

    def insert(self,priority, value):
        # Verifica se cabe mais informação
        if self.size < self.maxsize:
            # 1:caso esteja vazio
            if self.size == 0:
                self.array.append([priority, value])
                self.size = self.size + 1
                return True
            # 2:caso não esteja vazio

            if self.size != 0:
                self.array.append([priority, value])
                self.size = self.size + 1
                self.buildHeap()
                return True

    # (<Sub-treap da Esquerda><Rótulo>/<Prioridade><Sub-treap da Direita>)
    def printHeap(self):
        print("Teste")

    def getArra (self):
        return self.array

    def printTreeheap(self, level=0, i=0):
        if i < self.size:
            self.printTreeheap(level + 1, 2 * i + 2)
            print(' ' * 4 * level + '-> ' + str(self.array[i]))
            self.printTreeheap(level + 1, 2 * i + 1)

    
# Não entendi como e para printar as informações. 

teste1 = ['a', 7, 'b', 6, 'c', 5, 'd', 4, 'e', 3, 'f', 2, 'g', 1]
teste2 = ['a',1,'b',2 ,'c',3, 'd',4, 'e',5, 'f',6 ,'g',7]


vetor = heap(7)

for case in range(0,(len(teste2)-1), 2):
    print(case)
    vetor.insert(teste2[case + 1], teste2[case])


vetor.printTreeheap()
print(vetor.getArra())