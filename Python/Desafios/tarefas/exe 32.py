from datetime import date
ano = int(input('que ano analisa, coloque 0 para analisar o ano atual >>>'))

if ano == 0:
    ano = date.today().year
    if ano % 4 == 0 and ano % 100 != 0 or ano %400 ==0:
        print('o ano {} e bissesto'.format(ano))
    else:
        print('o ano {} não e bisseto '.format(ano))

else:
    if ano % 4 == 0 and ano % 100 != 0 or ano %400 ==0:
        print('o ano {} e bissesto'.format(ano))
    else:
        print('o ano {} não e bisseto '.format(ano))