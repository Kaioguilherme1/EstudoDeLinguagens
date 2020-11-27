n1 = int(input('digite o primeiro seguimento >>>'))
n2 = int(input('digite o segundo seguimento >>>'))
n3 = int(input('digite o terceiro seguimento >>>'))
def t(triangulo):
    print('os valores formão um triangulo {}'.format(triangulo))
if(n1 < n2 + n3 and n2 < n1 + n3 and n3 < n1 + n2):
    if (n1 == n2 == n3):
      t('Equilatero')
    elif (n1 == n2 or n1 == n3):
      t('Isoseles')
    elif (n1 != n2 != n3):
        t('Escaleno')
else:
    print('os valores não formão um triangulo')