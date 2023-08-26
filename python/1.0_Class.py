 
class Televisao: 
    def __init__(self):
        self.volume = 10
    def volume_UP(self):
        self.volume += 1
    def volume_DOWN(self):
        self.volume -= 1

tv = Televisao()
print("Volume quando ligamos a TV: ", tv.volume)        

tv.volume_UP()
tv.volume_UP()
tv.volume_UP()
print("Aumentando volume 3 Vezes, volAtual: ", tv.volume)        

tv.volume_DOWN()
print("Diminuindo volume 1 Vezes, volAtual: ", tv.volume)        



class ContaCorrente:
    def __init__(self):
        self._saldo = 0
    def depositar(self, valor):
        self._saldo += valor
    def consultar_saldo(self):
        return self._saldo
    
cc = ContaCorrente()
print("seu saldo: ",cc.consultar_saldo())    
cc.depositar(500)
print("seu saldo: ",cc.consultar_saldo())    