"""def fatorial(n):
    if n == 0 or n == 1:
        return 1
    else: 
        return n * fatorial(n-1)
    
numero = 5
resultado = fatorial(numero)
print(f'O fatorial de {numero} é {resultado}')


def fibonacchi(n):
    if n == 1 or n== 2:
        return 1
    else: fibonacchi(n-1) + fibonacchi(n-2)
"""
#escreva uma funcao recursiva que receba um numero inteiro n e retorne a soma de todos os numeros naturais de 1 até n. Por exemplo, se n for 5, o resultado de ve ser 1+2+3+4+5 = 15

def soma_sequencia(numero):
    if numero == 0:
        return 0
    else: return...