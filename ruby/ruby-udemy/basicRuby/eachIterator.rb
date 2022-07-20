# o each é um método que percorre todos os elementos de um array
array = [1, 2, 3, 4, 5]
array.each { |i| puts i }

puts '----------------------------------'

# tamém é possível usar o each em forma de bloco:
array.each do |i|
  puts i * 2
end 
# o bloco é executado para cada elemento do array
