class pessoa:
    def __init__(self):
        self.cfp      = None
        self.nome     = None
        self.endereco = None

class cliente(pessoa):
    pass

class funcionario(pessoa):
    def __init__(self):
        self.matricula = None
        self.salario = 0
    def bater_ponto(self):
        pass
    def fazer_login(self):
        pass

f1 = funcionario()
f1.nome = "Calixto"

print(f1.nome)

c1 = cliente()
c1.nome = 'jao'
c1.cpf = '123456'

print(c1.nome)
print(c1.cpf)