def l(x):
    print('=-' * x)


casa = int(input('valor da casa >>>'))
salario = int(input('salario do user >>>'))
T = int(input('em quanto tempo ira pagar >>>'))
M = T*12
PR = casa/M
po = (30*salario)/100
if (PR < po):
    l(20)
    print('tudo certo')
    print('voce pagara R${:.2f} por mes por {} anos'.format(PR, T))
    print('sendo o valor total da casa R${}'.format(casa))
else :
    print('desculpe mas seu emprestimo foi negado')
    print('pois o valor da casa utrapasa os 30 % do valor da casa')