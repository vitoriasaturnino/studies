# saida pagrão do ruby é o puts
puts "Hello World!".chomp

# o comando gets é a entrada padrão do ruby
puts "Digite seu nome: "
nome = gets 

# para saber o que há no conteudo de uma variavel uso o comando .inspect
puts nome.inspect
# isso mostra o conteudo da variavel até mesmo as quebras de linha que vem por padrão

# caso a quebra de linha não seja necessária podemos remover com o comando chomp
puts nome.chomp.inspect

# para pegar o conteudo de uma variavel, utilize o comando gets
nome = gets
