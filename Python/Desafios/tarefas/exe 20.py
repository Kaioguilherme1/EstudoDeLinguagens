import random
n1 =input('digite um nome')
n2 =input('digite outro nome')
n3 =input('digite outro nome')
n4 =input('digite outro nome')
lista = [n1, n2, n3, n4]
lista2 =random.shuffle(lista)
print('a ordem sera {}'.format(lista))