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
    return root.value


def findMax(root):
    if root is None:
        return None
    while root.right is not None:
        root = root.right
    return root.value
    

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
print("min: ",findMin(root))
print("max: ",findMax(root))
print("Altura: ", findHeight(root))