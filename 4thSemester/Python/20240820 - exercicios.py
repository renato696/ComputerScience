#Lista de exercícios

"""
ex13 - Calculo de bonus
START
- perguntar o salario
- numero de anos de serviço na empresa
- mais de 5 anos -> bonus 10%
- menos de 5 anos -> bonus 5%
END


print('Calculadora de Bonus Salarial')

salario = float(input('Qual o valor do seu salário? '))
anos_de_trabalho = int(input('Quantos anos de trabalho na empresa você tem? '))

if anos_de_trabalho >= 5:
    salario_com_bonus = salario * 1.1
    print(f'Seu salário com bonus é R$: {salario_com_bonus}')
else: 
    salario_com_bonus = salario * 1.05
    print(f'Seu salário com bonus é R$: {salario_com_bonus}')
"""

"""
Calcular média das notas e informar se aprovado/recuperacao/reprovado
START
- insira a nota de cada prova e armazene nas variáveis
- validar cada nota se entre 0-10
- calcule a média das notas
- comparar a media com as notas alvo e informar se aprovado/recuperacao/reprovado
"""

print('Média das notas e resultado final')

nota1 = int(input('Informe a nota da sua primeira nota: '))
nota2 = int(input('Informe a nota da sua segunda nota: '))
nota3 = int(input('Informe a nota da sua terceira nota: '))

media = (nota1 + nota2 + nota3) / 3

if media >= 7:
    print(f'Sua média é {media}, você foi aprovado!')
elif  5 <= media < 7:
    print(f'Sua média é {media}, você ficou de recuperação')
else:
    print(f'Sua média foi {media}, você reprovou.')
