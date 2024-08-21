#Lista de exercícios

"""
ex13 - Calculo de bonus
START
- perguntar o salario
- numero de anos de serviço na empresa
- mais de 5 anos -> bonus 10%
- menos de 5 anos -> bonus 5%
END


print('Calculadora de Bonus Salarial\n')

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
END


print('Média das notas e resultado final\n')

nota1 = int(input('Informe a nota da sua primeira nota entre 0 e 10: '))
if 0 <= nota1 <= 10:
    print('Nota armazenada')
else:
    nota1 = int(input('Informe a nota da sua primeira nota entre 0 e 10 corretamente: '))
        
nota2 = int(input('Informe a nota da sua segunda nota entre 0 e 10: '))
if 0 <= nota2 <= 10:
    print('Nota armazenada')
else:
    nota2 = int(input('Informe a nota da sua segunda nota entre 0 e 10 corretamente: '))
    
nota3 = int(input('Informe a nota da sua terceira nota entre 0 e 10: '))
if 0 <= nota3 <= 10:
    print('Nota armazenada')
else:
    nota3 = int(input('Informe a nota da sua terceira nota entre 0 e 10 corretamente: '))

media = (nota1 + nota2 + nota3) / 3

if media >= 7:
    print(f'Sua média é {media:.2f}, você foi aprovado!')
elif  5 <= media < 7:
    print(f'Sua média é {media:.2f}, você ficou de recuperação')
else:
    print(f'Sua média foi {media:.2f}, você reprovou.')
"""

"""
START
- Nome: Calculo de folha de pagamento
- informar o valor da hora trabalhada
- informar a quantidade de horas trabalhadas
- calcular o valor do salario bruto
- calcular o valor do desconto do IRPF - de acordo com a aliquota - armazenar
- calcular o valor do Sindicato 
- Calcular o valor do INSS
- Calcular o valor do FGTS
- Calcular o valor total dos descontos
- calcular o salario liquido
-  informar o resumo apresentando: salario bruto; IRPF; INSS; FGTS; total dos descontos; salario liquido
END


print('Calculadora de Folha de Pagamento\n')

horas_trabalhadas = int(input('Informe o número de horas trabalhadas no mês: '))
valor_hora_trabalhada = float(input('Quanto você ganha por hora trabalhada: '))
salario_bruto = horas_trabalhadas * valor_hora_trabalhada

if salario_bruto <= 900:
    irpf = salario_bruto
elif 900 < salario_bruto <= 1500:
    irpf = salario_bruto * 0.05
elif 1500 < salario_bruto < 2500:
    irpf = salario_bruto * 0.1
else: irpf = salario_bruto * 0.2

sindicato = salario_bruto * 0.03
inss = salario_bruto * 0.1
fgts = salario_bruto * 0.11
total_descontos = irpf + inss
salario_liquido = salario_bruto - total_descontos

print(f'Salário Bruto: R$ {salario_bruto}')
print(f'\nIRPF: R$ {irpf}')
print(f'INSS (10%): R$ {inss}')
print(f'FGTS (11%): R$ {fgts}')
print(f'\nTotal de Descontos: R$ {total_descontos}')
print(f'Salário Liquido: R$ {salario_liquido}')
"""

"""
EX - Consumo de água de reservatório específico
START
- informe as medidas do reservatório de água
- informe o comprimento do reservatorio em centimetros - armazene
- informe a largura do reservatório em centimetros - armazene
- informe a altura do reservatório em centimetros - armazene
- calcule o volume (capacidade) do reservatório em litros (1 litro = 1000cm3) - armazene
- obtenha o consumo médio diário dos utilizadores (litros/dia) - armazene
- informe acapacidade total do reservatorio em litros
- informe a autonomia do reservatório em dias
- informe a classificação do consumo com base nos dias de autonomia
    - elevado se autonomia menor que 2 dias
    - moderado se autonomia entre 2 a 7 dias
    - reduzido se autonomia maior que 7 dias 
END
"""

