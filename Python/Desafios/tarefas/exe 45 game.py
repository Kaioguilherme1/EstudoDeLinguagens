from random import randint
from time import sleep
def l() :
    print('=-'*40)
l()
print('Ola meu nome e bob vamos jogar')
print('Escolha seu arma')
l()
print('[0] pedra')
print('[1] papel')
print('[2] tesoura')
l()
n = int(input('escolha'))
item = ('pedra','papel','tesoura')
c = randint(0,2)
l()
if n <= 2:
    sleep(1)
    print('JO')
    sleep(1)
    print('Kem')
    sleep(1)
    print('PO')
    sleep(1)
    l()
    print('bob escolheu', item[c])
    print('você escolheu', item[n])
    if c == 0:  # pedra
        if n == 0:
            l()
            print('empatou')
            l()
        elif n == 1:
            l()
            print('você venceu')
            l()
        elif n == 2:
            l()
            print('bob venceu')
            l()
    elif c == 1:  # papel
        if n == 0:
            l()
            print('bob venceu')
            l()
        elif n == 1:
            l()
            print('empatou')
            l()
        elif n == 2:
            l()
            print('você venceu')
            l()

    elif c == 2:  # tesoura
        if n == 0:
            print('você venceu')
        elif n == 1:
            print('bob venceu')
        elif n == 2:
            print('empatou')
else:
    print('você não escolheu nenhuma das alternativas')