
class item:
    def __init__(self, valor, peso):
        self.valor = int(valor)
        self.peso = int(peso)
    
    def get_valor(self):
        return self.valor
    
    def get_peso(self):
        return self.peso

class mochila:
    def __init__(self, peso_maximo=16):
        self.peso_maximo = peso_maximo
        self.peso = 0
        self.itens = []
        self.valo_total = 0

    def adicionar_Item(self, item):
        if self.peso < self.peso_maximo:
            self.peso = self.peso + item.get_peso()
            self.valor_total = self.valo_total + item.get_valor_total()
            self.itens.append(item)
            return True
        else:
            print("Muito pesado para adicionar na mochila")
            return False
    
    def retirar_item(self, item):
        self.itens.remove(item)
    
    def get_valor_total(self):
        return self.valo_total
    
    def get_peso(self):
        return self.peso
    
    def get_peso_maximo(self):
        return self.peso_maximo
    
    def get_items(self):
        return self.items
    

def print_inventario(nome, items):
    print("|========================|")
    print("|       {:<10}       |".format(nome))
    print("|========================|")
    for item in items:
        print("| {:<10} |   {:<2} kg  | R${:<4}.00 |".format(item, item.get_peso(), item.get_valor()))
        valor_total += int(item.get_valor())
        peso_total += int(item.get_peso())
    print("|========================|")
    print("| peso total: {:<2} kg | valor total: R${:<4}.00 |".format(peso_total, valor_total))
    print("|========================|")

def metodo_guloso(items, mochila):
    item_mais_caro = 0
    for item in items:
        if item.valor > item_mais_caro:
            if item.peso < (mochila.peso - mochila.peso_maximo):
                item_mais_caro = item
                items.remove(item)
                print_inventario("loja", items)
                print_inventario("Mochila", mochila.get_items())
                
    
    pegou = mochila.adicionar_Item(item_mais_caro)
    if pegou == True:
        metodo_guloso(items, mochila)


banana = item(5,1)
dvd = item(200,5)
peso = item(500,10)
barra_de_ouro = item(5000, 10)
celular = item(700, 1)
air_dots = item(800, 1)
cordao_de_ouro = item(4000, 6)
sansung_x = item(3000, 1)

items = [banana, dvd , peso, barra_de_ouro, celular,air_dots, sansung_x, cordao_de_ouro]
mochila = mochila()

metodo_guloso(items, mochila)
