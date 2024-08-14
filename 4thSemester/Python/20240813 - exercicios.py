'''print('Hello World\n')

a = 10
b = 20

c = a+b
a = c

print(f'A é igual a {a} e B é igual a {b}')
print(f'a = {a}, b = {b}, c = {a+b}')

nota = 10
titulo = 'Professora'
nome = 'Altamira'

'''

'''Isso é um 
comentário de mais
de uma linha'''

'''

print(f'\nOlá, {titulo} {nome}')
print(f'Neste semestre vou tirar nota {nota}!')

nome_input = input('\nDigite seu nome: ')
idade = int(input('Digite sua idade: '))
print(f'Seu nome é {nome_input} e sua idade é {idade}.')
#por padrão, o input recebe e armazena os dados como strint. se for necessário, fazer a conversão para integer, float, boolean.

numero1 = int(input('\nDigite um número: '))
numero2 = int(input('Digite outro número: '))
soma = numero1 + numero2

print(f'A soma dos numeros é: {soma}')


print('Cálculo da média das notas\n')
nota1 = int(input('Digite a nota da sua primeira prova: '))
nota2 = int(input('Digite a nota da sua segunda prova: '))
nota3 = int(input('Digite a nota da sua terceira prova: '))
media = (nota1+nota2+nota3)/3
print(f'A média da suas notas é: {media:.2f}')
print(f'************************************\n\n')

print('Conversor Real para Dolar')
reais = int(input('Digite a quantidade em Reais: '))
cotacao = int(input('Digite a cotação Dolar/Real: '))
dolar_real = reais / cotacao
print(f'Você receberá {dolar_real:.2f} dolares.')

expressao = '2+3*4'
resultado = eval(expressao)
print(resultado)

expressao = input('Digite a expressão matemática: ')
resultado = eval(expressao)
print('')
print(expressao)
print(resultado)

palavra = input('Digite uma palavra: ')
print(palavra)
print(palavra[::-1])

idade = int(input('Digite sua idade: ')) 
if idade >= 18: print('maior de idade') 
else: print('menor de idade')

preco_tabela = float(input('Digite o preço do produto sem desconto: '))
promocao = input('O produto está em promoção? sim ou não?')
preco_promocional = preco_tabela * .80
if promocao == sim: print(f'O preço final do produto é': {preco_promocional}') 
else: print(f'Hoje você paga o preço tabela de {preco_tabela}')
'''