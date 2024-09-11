##numero =int(input('Digite um numero inteiro positivo: '))
#
##while numero >= 0:
##    print(numero)
##    numero -= 1 #decremento do número
#
#======================================-----------------------------------
#
#- pedir números
#- soma atingir 100 ou exceda
#- imprimir soma total e quantidade de números inseridos 
#
#
#sum_numbers = 0
#qtty_numbers = 0
#
#while sum_numbers < 100:
#    number = float(input('Insira um número: '))
#    sum_numbers = sum_numbers + number # sum += number
#    qtty_numbers = qtty_numbers + 1 # qrry += 1
#    
#print(f'A soma dos numeros é {sum_numbers} e foram digitados {qtty_numbers} números')
#
#-----------------------------------------------------------------------------------------
#
# digitar uma palavra ou frase
# contar quantas vezes a letra E aparece na string
# o programa deve continuar pedindo strings até que o usuario digite "sair"
#
# esse exercicio pode ser resolvido usando a função count
#
#phrase = input('Digite uma palavra ou uma frase: ')
#i = 0
#
#while phrase != 'sair':
#    for char in phrase:
#        #print(char)
#        if char == 'e' or char == 'E': i +=1
#            
#phrase = input('Digite uma palavra ou uma frase')
#print(f'a quantidade de e = {i}')
#
#------------------------------------------------------------------------------------------------
#
#- registre um numero
#- peça para o usuario digitar adivinhar um numero
#- o usuario tem tentativas infinitas
#- quando o usuario acerta, imprime Parabens
#- se digitar zero, tbm sai do app
#- usar o while True
 
#----------------------------------------------------------------------------------------
#- inicie contador em 10
#- conte regressivamente até 1
#- perguntar para o usuario se precisa continuar a cada numero
#- nao, interrompe, sim, continua a contagem
#
#counter = 10
#
#while True: 
#    answer = input('continuar a contagem ? yes ou no ?')
#    if answer == 'no':break
#    else: counter = counter - 1
#    print(f'contador em {counter}')
#    print('Digite novamente')
#
#-------------------------------------------------------------------------------------------------

numbers = int(input('Digite um numero: '))

while True: 
    if numbers == 0: break
    elif numbers % 2 == 0: print('Esse numero é par')
    else: print('Esse numero é impar')
    
    
