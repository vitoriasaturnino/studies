'''Faça um programa que peça dois números inteiros e imprima a soma desses dois números'''
print ('------ Ex01 - Somador ------')
N1 = int(input('Digite um número:'))
N2 = int(input('Digite mais um número:'))
print ('A soma entre os dois números é =', N1 + N2)

'''Escreva um programa que leia um valor em metros e o exiba convertido em milímetros'''
print ('------ Ex02 - Convertendo medidas ------')
metros = int(input('digite a medida em metros: '))
print (metros, f'equivalem a {metros * 1000} milímetros!')

'''Escreva um programa que leia a quantidade de dias, horas,
minutos e segundos do usuário. Calcule o total em segundos'''
print ('------ Ex03 -Conversor ------')
dias = int(input('Informe a quantidade de dias:'))
horas = int(input('Informe a quantidade de horas:'))
minutos = int(input('Informe a quantidade de minutos:'))
segundos = int(input('Informe a quantidade de segundos:'))
total = (((dias * 24) * 60) * 60) + ((horas * 60) * 60) + (minutos * 60) + segundos
print ('o total de todos os segundos somados é', total)

'''Faça um programa que calcule o aumento de um salário. Ele deve solicitar o valor 
do salário e a porcentagem do aumento. Exiba o valor do aumento e do novo salário'''
print ('------ Ex04 - Aumento salário ------')
salario = float(input('Informe o salário atual do colaborador:'))
porcentagem = float(input('Informe a porcentagem de aumento:'))
valor_aumento = (salario/100) * porcentagem
novo_salario = salario + (salario/100) * porcentagem
print (f'O a porcentage de aumento equivale a R${valor_aumento:.2f}')
print (f'O novo salário do colaborador é de R$ {novo_salario:.2f}')

'''Solicite o preço de uma mercadoria e o percentual de desconto.
Exiba o valor do desconto e o preço a pagar'''
print ('------ Ex05 -Calculo desconto ------')
valor_produto = float(input('Informe o valor do produto: '))
porcentagem = float(input('digite o valor do desconto: '))
valor_desconto = (valor_produto / 100) * porcentagem
valor_final = valor_produto - ((valor_produto / 100) * porcentagem)
print (f'o valor do descono é igual a R$ {valor_desconto:.2f}')
print (f'o valor com o desconto é de R$ {valor_final:.2f}')

'''Calcule o tempo de uma viagem de carro. Pergunte a distância
a percorrer e a velocidade média esperada para a viagem.'''
print('------ Ex06 - Calculadora tempo viagem ------')
distancia = float(input('Informe a distância em km: '))
velocidade = float(input('Informe a velocidade média esperda m km/h: '))
print(f'o tempo médio estimado para essa viagem é de {distancia / velocidade} horas')

'''Converta uma temperatura digitada em Celsius para Fahrenheit. F = 9*C/5 + 32'''
print('------ Ex07 - Conversor de temperatura ------')
celcius = float(input('Informe a temperatura em graus celcius: '))
fahrenheit = (9 * (celcius / 5)) + 32
print('{celcius:.2f} celcius equivalem a {fahrenheit:.2f} graus fahrenheit')

'''Converta de Fahrenheit para Celsius.'''

print('------ Ex08 - Conversor temperatura ------')
fahrenheit = float(input('Informe a temperara em graus fahrenheit:'))
celcius = (fahrenheit - 32) * (5/9)
print(f'{fahrenheit:.2f} graus fahrenheit equivalem a {celcius:.2f}graus celcius')

'''Escreva um programa que pergunte a quantidade de km percorridos por um carro
alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado.
Calcule o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km rodado.'''
print('------ Ex09 - Calculadora aluguél deveículo ------')
km_rodados = int(input('Informe a quantidade de km rodados com o veículo: '))
dias_de_uso = int(input('Informe a quantidade de dias em que o veículo ficou alugado: '))
valor_total = (dias_de_uso * 60) + (km_rodados * 0.15)
print(f'O valor final a ser pago é de R$ {valor_total:.2f}')

'''Escreva um programa para calcular a redução do tempo de vida de um fumante.
Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou.
Considere que um fumante perde 10 minutos de vida a cada cigarro, calcule quantos
dias de vida um fumante perderá. Exiba o total de dias.'''

import os
print('------ Ex10 - Tempo de vida de um fumante ------')
cigarros_diarios = int(input('Informa quantos cigarros você fuma por dia: '))
anos_fumando = int(input('Informe a quntos anos você já fuma: '))
total_cigarros = anos_fumando * 365 * cigarros_diarios
total_tempo_perdido = total_cigarros / 144
print('A quantidade de tempo perdido é de aproximadamente',round(total_tempo_perdido), 'dias!')

'''Sabendo que str( ) converte valores numéricos para string,
calcule quantos dígitos há em 2 elevado a um milhão.'''
print('------ Ex11 - conversão tipo de variável ------')
print(len(str(2**10000000)))