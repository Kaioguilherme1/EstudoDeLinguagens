print('='*18,'lojinha do zé','='*18)
P = float(input('qualo valor da compra R$'))
print('='*49)
print('[1] para pagar a vista/cheque')
print('[2] para pagar a vista no cartão')
print('[3] para pagar em ate 2x no cartão')
print('[4] para pagar parcelado em 3X ou mais no cartão')
e = int(input('digite sua escolha'))
print('='*49)
if e == 1:
    d = (P*10)/100
    p = P - d
    print('pagamento realizado a vista no cheque no valor de R${:.2f} com 10% de desconto'.format(p))
elif e == 2:
    d = (P * 5) / 100
    p = P - d
    print('pagamento realizado a vista no credito no valor de R${:.2f} com 5% de desconto'.format(p))
elif e == 3:
    pa = P/2
    print('pagamento realizado no credito parcelado em 2x de {:.2f} sem juros do valor total de R${:.2f}'.format(pa,P))
elif e == 4:
    n = int(input('em quantas vezes quer parcelar >'))
    f = (P*20)/100
    pa = (P + f)/n
    print('pagamento realizado no credito parcelado em {:.2f}x de R${:.2f} com juros de 20% do valor total de R${:.2f}'.format(n, pa, (P + f)))