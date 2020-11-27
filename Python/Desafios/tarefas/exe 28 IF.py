import random
print('=-'*40)
print(' vou pensar em um numero entre o a 5. tente advinha')
print('=-'*40)
N = int(input('que numero eu estou pensando >>>'))
n = random.randrange(5)
print('processando.......')
print('acertou'if   n == N else"nao vai toma no cú".format(n))
while 
