# Estrura do nó
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


def printBST(root):
    if root:
        print(root.value)
        printBST(root.left)
        printBST(root.right)


def find_sum(root):
    if root == None:
        return 0
    else:    
        left = find_sum(root.left)
        right = find_sum(root.right)
        result = left + right + root.value
        return result
    

root = Node(5)
root.insert(1)
root.insert(2)
root.insert(3)
root.insert(6)
root.insert(7)
root.insert(8)

print("Soma total: ",find_sum(root))

printBST(root)
