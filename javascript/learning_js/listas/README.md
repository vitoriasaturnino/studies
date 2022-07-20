# Listas

Uma lista em JavaScript pode ser implementada da seguinte forma:

Implementação:

![navegacao_lista](https://user-images.githubusercontent.com/68754092/175156168-e86f3c34-7e0f-4b92-a023-47424ff8b838.png)

Console:

![saida_navegacao_lista](https://user-images.githubusercontent.com/68754092/175156139-3cb4f11c-69ae-459d-a9ed-d237930288a9.png)

É importante lembrar que por ser uma linguagem de tipagem dinêmica os itens da lista podem ser de qualquer tipo.
A navegação em uma lista pode ser feita pelo seu índice, basta passar a possição que deseja acessar.

## Remoção de itens em uma lista

Para remover um elemento de uma lista utiliza-se o comando **pop**, mas é impotante realtar que este método só remove o último elemento da lista. Cada pop() remove apenas um elemento

Implementação:

![pop](https://user-images.githubusercontent.com/68754092/175160950-6d3af674-851a-48a9-9ede-a5e08b56650a.png)

Console:

![saida_pop](https://user-images.githubusercontent.com/68754092/175160953-1ad2a178-c0dd-4af9-9f15-548323f38873.png)

Para remover um item de acordo com sua posição o comando **splice(pos, 1)** deve ser usado:

Implementação:

![delete_item](https://user-images.githubusercontent.com/68754092/175160472-b3bb6b0d-a755-4684-a372-4bc18293a42e.png)

Console:

![saida_delete_item](https://user-images.githubusercontent.com/68754092/175160463-a8023dc8-6b0d-428d-b276-1372037cf0c8.png)

**pos** deve ser definida como uma várialvel, seu valor é a posição do item que desejamos remover da lista, neste caso a posição 1, depois da vígula deve ser expecificado a quantidade de itens a serem excluidos.

## Inserção de itens em uma lista

Para adicionar um item ao final da lista uso o comado **push**. Caso elemento precise ser inserido no inicio da lista podemos usar o comando **unshift**.

Implementação:

![add_elments](https://user-images.githubusercontent.com/68754092/175162603-d12b84ae-5fed-48b3-a91c-1171c7894e5e.png)

Console:

![saida_add_elments](https://user-images.githubusercontent.com/68754092/175162615-e8cc4cca-48cd-4212-b092-8fc35fbb4107.png)

## Mudando o valor de um elemento da lista

Para mudar o valor de algum item da lista basta referenciar sua posição e setar o novo valor

Implementação:

![mudanca_valor_item](https://user-images.githubusercontent.com/68754092/175163501-6b7c7bad-2c72-4c3e-b862-09453e76763e.png)

Console:

![saida_mudanca_valor_item](https://user-images.githubusercontent.com/68754092/175163497-64372152-74b1-4a1b-a316-8b77b90c1594.png)

## Verificação do índice de determinado elemento

Para buscar um elemento de uma lista caso não saiba seu índice use a função **indexOf()** passando como parametro o dado que deseja encontrar

Implementação:

![indexOf](https://user-images.githubusercontent.com/68754092/175164495-f31dfccd-ca78-43c4-b664-891ab5726a37.png)

Console:

![saida_indexOf](https://user-images.githubusercontent.com/68754092/175164483-46a30c13-5d94-4edd-93a1-1eefc0a36267.png)

## Ordenando uma lista

Para ordenar uma lista em ordem alfabética podemos utilizar a função **sort.()**

Implementação:

![sort](https://user-images.githubusercontent.com/68754092/175165026-d5e9c1da-886f-468f-ba1c-4eaa0d9ca8b5.png)

Console:

![saida_sort](https://user-images.githubusercontent.com/68754092/175165022-571b0cb1-61bb-41c2-bd44-d447d67fab9e.png)

## Número de items da lista

Para Saber qual o número de elementos de uma lista use a função **length**

Implementação:

![length_list](https://user-images.githubusercontent.com/68754092/175165494-55b31429-35b1-4a98-acec-32b38b6a53b5.png)

Console:

![saida_length_list](https://user-images.githubusercontent.com/68754092/175165492-0e1096de-0069-48a3-a308-be7a14468f32.png)

## Verificando se uma variável é uma lista

Use a função **isArray()**:

Implementação:

![isArray](https://user-images.githubusercontent.com/68754092/175166156-d869904c-e7f9-4de9-b033-3bf7622722a6.png)

Console:

![saida_isArray](https://user-images.githubusercontent.com/68754092/175166159-a674e303-d669-4df7-8783-fc38c8c01801.png)
