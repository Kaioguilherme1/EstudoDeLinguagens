from datetime import date
a = int(input('imforme seu ano de nascimento'))
ano = date.today().year
idade = ano - a
t = a + 18
i = 18 - idade
print(idade)
if(idade < 18):
    print('você não tem idade pra se alista')
    print('falta {} e so podera em {}'.format(i, t))
elif(idade > 18 and idade < 40):
    print('você ja deveria ter se alistado')
    print('idade ==',idade)
elif idade == 18:
    print('você tem que se alista imediatamente')
else:
    print('você ja passou da epoca pra se alista')
    print('você deveria ter se alisado em {}'.format(t))