#AUTH Kaio Guilherme

class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None


root = Node(0)
root.left = Node(1)
root.right = Node(0)
root.right.left = Node(1)
root.right.right = Node(0)
root.right.left.right = Node(1)
root.right.left.left = Node(1)


def sum_uni(root):
    univais = 0
    if root is None:
        return 0
    else:
        if((root.left is None and root.right is None) or root.left.key == root.right.key):
            univais = 1
        return sum_uni(root.right) + sum_uni(root.left) + univais 

print("Esta árvore possui {} subárvores Univais ".format(sum_uni(root)))
