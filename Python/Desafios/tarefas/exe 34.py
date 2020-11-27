d = int(input('qual e o valor do seu salario >>>'))
if d <= 1250:
    print('seu aumento sera de R${:.2f}'.format((d * 15)/100))
else:
    print('seu aumento sera de R${:.2f})'.format((d * 10)/100))