
from posixpath import split
import re


class hashtable:
    def __init__(self, maxsize):
        self.list = []
        self.maxsize = maxsize
        self.size = 0
        for i in range(maxsize):
            self.list.append(None)

    def __hashFunc(self, key):
        soma = 0
        if key is str
        for i in range(len(key)-1):
            soma = soma + ord(key[i])
        return soma % 7    
    
    def __LoadFactor(self):
        return self.size/self.maxsize

    def getTable(self):
        return self.list

    def insert(self, key, value):
        if self.size < self.maxsize:
            k = self.__hashFunc(key)
            print(k)
            if self.list[k] is None:
                self.list[k] = value
                self.size += 1
            else:
                
                print('local ocupado')
    def get(self, key):
        return self.list[self.__hashFunc(key)]



tabela = hashtable(10)

tabela.insert("ana", 35485756)
tabela.insert("Lisa", 84527856)
tabela.insert("Carlos", 45876524)
print(tabela.get("carro"))

