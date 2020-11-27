n1 = int(input('digite um numero >>>'))
n2 = int(input('digite outro numero >>>'))
if (n1 > n2):
    print('{} e maior que {}'.format(n1, n2))
elif(n1 < n2):
    print('{} e menor que {}'.format(n1, n2))
else:
    print('não existe valor maior os dois são iguais {} = {}'.format(n1, n2))