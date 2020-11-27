import math
a = float(input('comprimeto do cateto Adijasente >>'))
o = float(input('comprimeto do cateto oposto >>'))
h = math.hypot(a, o)
print('a hipotenusa e {:.2f}'.format(h))