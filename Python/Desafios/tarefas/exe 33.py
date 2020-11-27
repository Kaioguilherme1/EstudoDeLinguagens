n1 = int(input('digite um valor >>'))
n2 = int(input('digite outro vaor >>'))
n3 = int(input('digite outro valor >>'))
#menor
menor = n1
if n2 < n1 and n2 < n3:
    menor = n2
if n3 < n1 and n3 < n2:
    menor = n3
#maior
maior = n1
if n2 > n1 and n2 > n3:
    maior = n2
if n3 > n1 and n3 > n2:
    maior = n3
print('o maior numero e {}'.format(maior))
print('o menor numero e {}'.format(menor))