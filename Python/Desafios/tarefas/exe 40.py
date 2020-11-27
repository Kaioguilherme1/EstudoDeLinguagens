n1 = float(input('digite sua primeira nota >>>'))
n2 = float(input('digite a sengunda nota >>>'))
media = (n1 + n2)/2
if(media < 5):
    print('media {} você esta reprovado'.format(media))
elif(media > 5 and media < 6.9):
    print('media {} você esta de recuperação'.format(media))
else:
    print('parabens você passou com media {}'.format(media))