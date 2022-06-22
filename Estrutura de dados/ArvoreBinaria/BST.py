#AUTH Kaio Guilherme
class Node:
    def __init__(self, key):
        self.value = key
        self.left = None
        self.right = None
    
    def insert(self, key):

        if self.value:
            if key <= self.value:
                if self.left is None:
                    self.left = Node(key)
                else:
                    self.left.insert(key)
            elif key > self.value:
                if self.right is None:
                    self.right = Node(key)
                else:
                    self.right.insert(key)
        else:
            self.value = key


def printTree(root ,level=0):
    if  root is not None:
        printTree(root.left, level+1)
        print(' '* 4 * level + '-> ' + str(root.value))
        printTree(root.right, level+1)


def printBST(root):
    if root:
        print(root.value)
        printBST(root.left)
        printBST(root.right)

def findMin(root):
    if root is None:
        return None
    while root.left is not None :
        root = root.left
    return root


def findMax(root):
    if root is None:
        return None
    while root.right is not None:
        root = root.right
    return root
    

def find_sum(root):
    if root == None:
        return 0
    else:    
        left = find_sum(root.left)
        right = find_sum(root.right)
        result = left + right + root.value
        return result
    
def findHeight(root):
    if root is None:
        return -1
    leftH = findHeight(root.left)
    rightH = findHeight(root.right)
    return max(leftH , rightH) + 1

#percurso em level
import queue
import re
q = queue.Queue()

def levelOrder(root):
    if root is None: return None
    q.put(root)
    while not q.empty():
        current = q.queue[0]
        print(current.value, end=' ')
        if current.left is not None: q.put(current.left)
        if current.right is not None: q.put(current.right)
        q.get()

# Funçao de remoção
def deleteNode(root, value):
  if root is None:
      return None
  elif value < root.value:
    root.left = deleteNode(root.left, value)
  elif value > root.value:
    root.right = deleteNode(root.right, value)
  else:  # Nó foi encontrado

    # Caso 1: Nó folha
    if root.left and root.right is None:
      root = None

    # Caso 2: Nó tem um filho
    elif root.left is None:
      temp = root
      root = root.right
      temp = None
      return root
    elif root.right is None:
      temp = root
      root = root.left
      temp = None
    # Caso 3: Nó tem dois filhos
    else:
      minNode = findMin(root.right)
      root.value = minNode.value
      root.right = deleteNode(root.right, minNode.value)
  return root


#========================================
def altura(root):
    return findHeight(root)

def minimo(root):
    return findMin(root).value

def maximo(root):
    return findMax(root).value
    
def remocao(root, key):
    deleteNode(root, key)

root = Node(5)
root.insert(7)
root.insert(3)
root.insert(4)
root.insert(10)
root.insert(30)
root.insert(82)
root.insert(2)
root.insert(9)

print("Soma total: ",find_sum(root))

printTree(root)
print("========================================")
remocao(root, 3)
printTree(root)
print("min: ",minimo(root))
print("max: ",maximo(root))
print("Altura: ", altura(root))
