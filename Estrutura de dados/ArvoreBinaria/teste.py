import queue


class Node:
    def __init__(self, value=None):
        self.value = value
        self.left = None
        self.right = None
        self.height = 0


def insert(root, value):
    if root is None:
        return Node(value)
    else:
        if value < root.value:
            root.left = insert(root.left, value)
        elif value > root.value:
            root.right = insert(root.right, value)
    root.height = max(findHeight(root.left), findHeight(root.right)) + 1

    balanceFactor = getBalance(root)

    if (balanceFactor < -1):
      if (value > root.right.value):  # Rotação simples Esquerda
        return leftRotate(root)
      else:  # Rotação Dupla Esquerda
        root.right = rightRotate(root.right)
        return leftRotate(root)
      if (balanceFactor > 1):
        if (value < root.left.value):  # Rotação simples direita
          return rightRotate(root)
        else:  # Rotação dupla direita
          root.left = leftRotate(root.right)
        return rightRotate(root)

    return root


def deleteDeepest(root, d_node):
    q = []
    q.append(root)
    while(len(q)):
        temp = q.pop(0)
        if temp is d_node:
            temp = None
            return
        if temp.right:
            if temp.right is d_node:
                temp.right = None
                return
            else:
                q.append(temp.right)
        if temp.left:
            if temp.left is d_node:
                temp.left = None
                return
            else:
                q.append(temp.left)


def deletion(root, key):
    if root == None:
        return None
    if root.left == None and root.right == None:
        if root.key == key:
            return None
        else:
            return root
    key_node = None
    q = []
    q.append(root)
    temp = None
    while(len(q)):
        temp = q.pop(0)
        if temp.value == key:
            key_node = temp
        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)
    if key_node:
        x = temp.value
        deleteDeepest(root, temp)
        key_node.value = x
    return root

# PERCURSOS EM PROFUNDADE (DFS)


def inOrder(root):
    if root:
        inOrder(root.left)
        print(root.value, end=" ")
        inOrder(root.right)


def preOrdem(root):
    if root:
        print(root.value)
        preOrdem(root.left)
        preOrdem(root.right)


def printTree(root, level=0):
    if root is not None:
        printTree(root.right, level+1)
        print(' ' * 4 * level + '-> ' + str(root.value))
        printTree(root.left, level+1)

# FB = H(t.left) - H(t.right)


def getHeight(root):
    if root is None:
        return -1
    return root.height


def getBalance(root):
  if root is None:
    return 0
  return getHeight(root.left) - getHeight(root.right)


def findMin(root):
    if root is None:
        return None
    while root.left != None:
        root = root.left
    return root


def findMax(root):
    if root is None:
        return None
    while root.right != None:
        root = root.right
    return root


def findHeight(root):
    if root is None:
        return -1
    leftH = findHeight(root.left)
    rightH = findHeight(root.right)
    return max(leftH, rightH) + 1

# Rotações


def leftRotate(z):
  y = z.right
  z.right = y.left
  y.left = z
  z.height = findHeight(z)
  y.height = findHeight(y)
  return y


def rightRotate(z):
  y = z.left
  z.left = y.right
  y.right = z
  z.height = findHeight(z)
  y.height = findHeight(y)
  return y


# Percurso em Level (BFS)
q = queue.Queue()


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


def levelOrder(root):
    if root is None:
        return None
    q.put(root)
    while not q.empty():
        current = q.queue[0]
        print(current.value, end=" ")
        if current.left is not None:
            q.put(current.left)
        if current.right is not None:
            q.put(current.right)
        q.get()


# Main
root = None
root = insert(root, 1)
root = insert(root, 2)
root = insert(root, 3)
root = insert(root, 4)

printTree(root)
# print('min: ', findMin(root).value)
# print('max: ', findMax(root).value)
# print('height: ', findHeight(root))
# deletion(root, 35)
# deleteNode(root, 10)
# print('------')
# levelOrder(root)
# printTree(root)
