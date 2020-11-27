print('bom dia preencha o que se pede abaixo')
largura =float(input('digite a largura da parede >>>'))
altura =float(input('digite a atura da parede >>>'))
Area = largura * altura
tinta = Area / 2
print('uma parede de {0} m x {1} m tem a area igual a {2}m² e ira gasta {3} L de tinta'.format(largura, altura, Area, tinta))