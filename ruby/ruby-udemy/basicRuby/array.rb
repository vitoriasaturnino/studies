# testes feitos no modo interativo (irb)

# posso declarar um vetor sem definir seu tamanho em Ruby
vetor = []

# para inserir um elemento no início do vetor uso o comando push:
vetor.push(5)

#  para inserir um elemento no final do vetor uso o comando unshift:
vetor.unshift(10)

# para inserir um elemento em uma posição específica do vetor uso o comando insert passando a posição e o valor a ser inserido:
vetor.insert(1, 15)

# para remover um elemento do início do vetor uso o comando shift:
vetor.shift

# para remover um elemento do final do vetor uso o comando pop:
vetor.pop

# para remover um elemento de uma posição específica do vetor uso o comando delete_at:
vetor.delete_at(1)

# para remover um elemento específico do vetor uso o comando delete:
vetor.delete(5)

# para imprimir o vetor uso o comando puts:
puts vetor

# para imprimir o tamanho do vetor uso o comando length:
puts vetor.length

# para imprimir o índice de um elemento específico do vetor uso o comando index:
puts vetor.index(15)

