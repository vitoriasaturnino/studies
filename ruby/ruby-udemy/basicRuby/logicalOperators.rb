num_1 = 52
num_2 = 23
num_3 = 62
num_4 = 13

if (num_1 > num_2) && (num_1 < num_3) # && == and
  puts 'Consdição atendida nos dois casos'
if elsif (num_2 > num_4) || (num_1 > num_3) # || == or
  puts 'Consição atendida nos dois casos'
if elsif !(num_2 == num_4) # ! == not
  puts 'Consição atendida'
end

# arrumar para exemplos mais claros