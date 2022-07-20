puts 'Escolha um número de 1 a 3: '
num = gets.chomp.to_i 

case num
when 1
  puts 'O número é 1'
when 2
  puts 'O número é 2'
when 3
  puts 'O número é 3'
else
  puts 'Escolha uma opção válida'
end