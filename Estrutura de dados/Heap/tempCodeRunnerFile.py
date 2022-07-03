def maxHeapfy(A, i):

    e = 2*i + 1
    d = 2*i + 2

    if e <= len(A)-1 and A[e] > A[i]:
        maior = e
    else:
        maior = i
    if d <= len(A)-1 and A[d] > A[maior]:
        maior = d 
    if maior != i:
        A[i], A[maior] = A[maior], A[i]
        maxHeapfy(A, maior)

def buildHeap(A):
    heapSize = len(A)-1
    for i in range(heapSize//2, -1, -1):
        maxHeapfy(A, i)