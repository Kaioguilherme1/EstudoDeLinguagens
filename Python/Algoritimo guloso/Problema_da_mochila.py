
class item:
    def __init__(self,nome ,valor : int, peso : int):
        self.nome = nome
        self.valor = valor
        self.peso = peso
    
    def get_valor(self):
        return self.valor
    
    def get_peso(self):
        return self.peso
    
    def get_nome(self):
        return self.nome

class mochila:
    def __init__(self, peso_maximo=16):
        self.peso_maximo = peso_maximo
        self.peso = 0
        self.items = []
        self.valor_total = 0

    def adicionar_Item(self, objeto):
        if objeto.get_peso() <= self.peso_maximo - self.peso:
            self.peso += int(objeto.get_peso())
            self.valor_total += int(objeto.get_valor())
            self.items.append(objeto)
            return True
        else:
            print("Muito pesado para adicionar na mochila")
            return False
    
    def get_valor_total(self):
        return self.valor_total
    
    def get_peso(self):
        return self.peso
    
    def get_peso_maximo(self):
        return self.peso_maximo 
    
    def get_items(self):
        return self.items

def delete_item(item, items):
    for i in range(len(items)-1):
        if items[i] == item:
            items.pop(i)

def print_inventario(nome, items):
    valor_total = 0
    peso_total = 0
    print("|=========================================|")
    print("|                 {:<10}              |".format(nome))
    print("|=========================================|")
    for item in items:
        print("| {:<16} |   {:<2} kg  | R${:<4}    |".format(item.get_nome(), item.get_peso(), item.get_valor()))
        valor_total += int(item.get_valor())
        peso_total += int(item.get_peso())
    print("|=========================================|")
    print("| peso total:{:<2} kg |  total: R${:<6}     |".format(peso_total, valor_total))
    print("|=========================================|")

def metodo_guloso(items, mochila):
    item_mais_caro = items[0]
    for item in items:
        if item.valor > item_mais_caro.valor:
            disponivel = mochila.peso_maximo - mochila.peso
            if item.peso <= disponivel:
                item_mais_caro = item
    
    pegou = mochila.adicionar_Item(item_mais_caro)  
    delete_item(item_mais_caro, items)  
    print("\n**************************************************************************\n")
    print_inventario("loja", items)
    print("++++++++++++++++++++++++++++++++++++++++++++")
    print_inventario("Mochila", mochila.get_items())
    print("\n**************************************************************************\n")
    if pegou == True:
        metodo_guloso(items, mochila)


item1 = item("banana",5,1)
item2 = item("dvd",900,5)
item3 = item("peso",500,10)
item4 = item("barra_de_ouro",5000, 10)
item5 = item("celular",2000, 1)
item6 = item("air dots",1000, 1)
item7 = item("cordao de ouro",4000, 6)
item8 = item("sansung_x",3000, 1)

items = [item1, item2, item3, item4, item5, item6, item7, item8]
mochila = mochila()
metodo_guloso(items, mochila)
