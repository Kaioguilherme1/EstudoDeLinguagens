print('=-'*20)
print('         10 termos de uma PA')
print('-='*20)
n1 = int(input('informe o prmeiro termo >>>'))
n2 = int(input('sua razão >>>'))
for c in range(n1, (n1 + (10-1)*n2)+ n2 , n2):
    print(c,end=' -> ')
print('acabou')