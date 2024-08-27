"""
itens = [10, 20, 30, 40, 50]

for item in itens:
    print(item)


nome = input("Entre com seu nome: \n")
for letra in nome:
    print(letra)

colegas = []

for i in range(4):
    nome_dos_colegas = input('Digite o nome do colega: ')
    colegas.append(nome_dos_colegas)

print(colegas)

for numero in range(1, 11):
    if numero % 2 == 0: print(f"{numero} é par")
    else: print(f"{numero} é impar")
"""

numero = int(input('Digite um número: '))
soma = 0

for i in range(3, numero, 1*3):
    print(i)
    soma = soma + i
    
print(f"O resultado da soma é: {soma}")