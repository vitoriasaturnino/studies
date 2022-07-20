# Variáveis em JavaScript

Existem 3 formas de declarar variaveis em Js:

- **var**  
  Hoje em dia essa forma não é muito mais utilizada pois não tem o chamado **block scope**, o que a torna acessível de qualquer parte do código independente do escopo, e isso não é considerada uma boa pratica netre os desenvolvedores Js.

  ```
  var message = "Hello Wolrd!"
  ```

Como alternativa podemos usar:

- **let**
  Variáveis declaradas com let podem ser alteradas poseriormente;

  ```
  var message = "Hello Wolrd!"

  //mudando o conteudo da variavel message
  message = "Vamos aprender JavaScript!"
  ```

- **const**
  Já variáveis de claradas com cont não podem ser alteradas.
  ```
  const message = "Alô galera de cowboy"
  ```

# String

uma String pode ser declarada dentro de aspas simples **''** ou aspas duplas **""**

## Algumas formas de manipulação de strings

- **length** mostra o tamnho da variável:
  Implementação:

  ![length](https://user-images.githubusercontent.com/68754092/175143469-453db61d-7b10-4670-9963-f3fe0eede9f4.png)

Console:

![saida_length](https://user-images.githubusercontent.com/68754092/175143458-de6aacc4-8bd6-4a18-a24d-bfc9c1ea603b.png)

- **Concatenação** para concatenar strings e textos devemos colocar o conteúdo a ser imprimido entre duas crases **``** e as áriáveis dentro de **${}**:

Implementação:

![concatenacao](https://user-images.githubusercontent.com/68754092/175143466-852f1491-484b-4811-971d-a993d145e4de.png)

Console:

![saida_concatenacao](https://user-images.githubusercontent.com/68754092/175143455-ca6deac1-8cdd-42a6-b030-1ff92ccc2f00.png)

- **Conversão para letras maiusculas e minusculas** podemos usar o método **toUppercase()** para tornar a string em lentras maiusculas e **toLowerCase()** para tranformar-la em etras minusculas:

Implementação:

![lower_e_uppercase](https://user-images.githubusercontent.com/68754092/175143454-13ebb8f3-c840-414d-b88c-2d1f122e2643.png)

Console:

![saida_lower_e_uppercase](https://user-images.githubusercontent.com/68754092/175143459-996bbe8a-ae24-4309-8b97-9b6275f924cc.png)

- **Tranformando uma string em lista** o método **split()** pode transformar uma string em uma lista, basta informar dentro dos parenteses qual caractere será o parametro para o corte, caso não seja expecificado o método separa cada caractere da string em um item de uma lista:

Implementação:

![split](https://user-images.githubusercontent.com/68754092/175143463-6de173d5-a005-45ae-b6f9-a17a8fb1c11e.png)

Console:

![saida_split](https://user-images.githubusercontent.com/68754092/175143460-8e91a399-7f86-4964-b2ac-0c2b76a56da7.png)

Essas são algumas funções de manipulações de string bem úteis, caso precise de mais exemplos é só dar uma lida na [documentação de JavaScritp](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Reference/Global_Objects/String).

# Number

o tipo number é bem simples, basta declar a váriavel e ela já está prota para ser usada em diversas operações

Implementação:

![number](https://user-images.githubusercontent.com/68754092/175143980-388be1dc-4b08-4143-8109-da2fd5afd0a8.png)

Console:

![saida_number](https://user-images.githubusercontent.com/68754092/175144077-ed985643-31c1-4371-8f21-328b2fc4198f.png)

## Exemplo manipulação tipo number

- **Conversão** podemos converter um number para string com o seguinte método **toString()**

Implementação:

![toString](https://user-images.githubusercontent.com/68754092/175144136-16d36cc1-df4c-42aa-838e-6b5ec63875f2.png)

Console:

![saida_toString](https://user-images.githubusercontent.com/68754092/175144146-70be8750-8174-4260-bab2-4ea243bc6005.png)

# Boolean

O tipo boolean é bem simples, nele temos dois valores, **verdadeiro** ou **falso**.
Então se uma informação não é verdadeira, logo podemos perceber que ela é falsa e vice-versa

Implementação:

![booleans](https://user-images.githubusercontent.com/68754092/175144413-02db4d9b-5b3c-4d9f-91b7-6eaa2085874d.png)

Console:

![saida_booleans](https://user-images.githubusercontent.com/68754092/175144404-dac9a386-c637-4af9-a4b7-e1ec010fe236.png)

## Null e Undefined

O tipo **null** indica que a variável não tem nenhum valor (vazia) e o **undefined** pode ser usados quando ainda não se tem certeza de qual será o valor que aquela variavel irá receber

![null_e_undefined](https://user-images.githubusercontent.com/68754092/175144400-c0ec7b0f-ab3d-42c3-b80e-c1a25d94bda0.png)

# List

Uma lista é uma várialvel que pode armazenar vários valores

Implementação:

![list](https://user-images.githubusercontent.com/68754092/175144398-dbddcae8-225f-4ef5-b724-5e8f4de8e7e5.png)

Console:

![saida_list](https://user-images.githubusercontent.com/68754092/175144407-769f2232-6f6e-4cd2-ab3a-ffce602dfa2c.png)

# Objetos

Este tipo pode quardar propriedades e valores

Implementação:

![object](https://user-images.githubusercontent.com/68754092/175144402-d7f8233f-c3bd-468d-a4df-ad09161fd876.png)

Console:

![saida_object](https://user-images.githubusercontent.com/68754092/175144412-70757ba9-68c1-43b1-bf6a-4ac7511a009f.png)
