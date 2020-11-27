import time
print('t - 10 segundos para o lançamento dos fogos')
for c in range(10, 0, -1):
    time.sleep(1)
    print(c)
print('lançamento feito')