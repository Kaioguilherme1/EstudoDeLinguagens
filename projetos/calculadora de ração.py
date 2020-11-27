print ('calculado de ração')
pb =float(input('digite a necessidade de proteina bruta >>>'))
nome1 =input('digite o nome do ingrediente energetico >>>')
p1 = float(input('digite o valor de proteina bruta desse ingrediente >>>'))
nome2 =input('digite o nome do ingrediente proteinado >>>')
p2 = float(input('digite o valor de proteina bruta desse ingrediente >>>'))
re = pb-p1
rp = p2-pb
soma = rp+re
r1 = float(re/soma)*100
r2 = float(rp/soma)*100
o1 = float (r2*p1)/100
o2 = float (r1*p2)/100
nome3 ='total'
print('==============================================')
print('alimentos             : quantidade:  proteina bruta :')
print(': {:<20} : {:6}kg  : {:<15} :'.format(nome1,r2,o1))
print(': {:<20} : {:6}kg  : {:<15} :'.format(nome2,r1,o2))
print(': {:<20} : {:6}kg  : {:<15} :'.format(nome3,r1+r2,o1+o2))