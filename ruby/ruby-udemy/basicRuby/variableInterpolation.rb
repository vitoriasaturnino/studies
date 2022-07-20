# a diferença entre "" e '' é que o '' é um string e o "" é um string interpolation

# podemos concatenar strings com o +:
puts 'Olá' + nome

# ou fazer a interpolação como abaixo:
puts "Olá #{nome}"

# a interpolação é a forma mais recomendada pois quando usamos o + para somar as strings o ruby acaba mudando o endereço de armazenamento e criando um novo objeto, o que não é necessário já que o objetivo é apenas imprimir uma saida de texto.
