d = int(input('qual a distancia da viagem >>>'))
if d <= 200:
    print('ira custa R${:.2f}'.format(d*0.50))
else:
    print('ira custa R${:.2f})'.format(d*0.45))