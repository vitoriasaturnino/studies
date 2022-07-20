puts 'Digite sua idade: '
idade = gets.chomp
new_idade = idade.to_i + 1
puts "Daqui um ano você terá #{new_idade} anos"

# tipos de casting mais usados em Ruby:
# .to_i para converter para inteiro
# .to_f para converter para float
# .to_s para converter para string