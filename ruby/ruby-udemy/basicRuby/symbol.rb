# simbuos podem ser considerados como um astring estatica (vantagem economia de memoria)

# quando tenho uma string seu endereço de memória pode variar a cadas solicitação, podemos fazer o teste no modo interativo como no exemplo abaixo:
'Vitória'.object_id
# se rodar o programa novamente, o endereço de memória pode variar

# Um simbulo pode ser declarao da seguinte dorma 
:simbulo
# e para verificar se endereço podermos utilizar
:simbulo.object_id
# diferente de uma string o endereço de memória permanece o mesmo.

# uma aplicação muito útil para simbulos pode ser feita a hora de criar um hash, como no exemplo abaixo:
hash = { :nome => 'Vitória' }

# a declaração também pode ser feita da seguinte forma:
hash = { nome : 'Vitória' }
# esse formato é bastante comum em arquivos json

# também é possivel converter uma string para um simbilo com o seguinte comando:
'Vitória'.to_sym