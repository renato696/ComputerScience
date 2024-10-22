"""import math
# posso renomear a biblioteca usando - import math as mt
# importar só uma função - from math import sqrt 

def calcular_raiz():
    numero = int(input('Digite um numero: '))
    raiz = math.sqrt(numero)
    #raiz =5
    # sqrt(numero)
    print(f'A raiz quadrada de {numero} é {raiz:.02f}')
    
calcular_raiz()
"""
"""
import random
from math import sqrt

numero = random.randint(1,45)
print(f'O numero sorteado é {numero}')
raiz = sqrt(numero)
print(f'A raiz do numero é {raiz:.02f}')
"""

from datetime import datetime

#agora = datetime.datetime.now()
#print(f'Agora são:{agora}')
"""
data_entrada1 = input('Digite a primeira data no formato dia/mes/ano')
data_entrada2 = input('Digite a segunda data no formato dia/mes/ano')
formato = "%d/%m/%Y"

data1 = datetime.strptime(data_entrada1,formato)
data2 = datetime.strptime(data_entrada2,formato)

diferenca = data2 - data1

print(f'A diferença entre as datas é de {diferenca.days} dias')
"""

aniversario = input('Digite sua data de nascimento no formato DD/MM')
formato = "%d/%m/%Y"
data_aniversario=datetime.strptime