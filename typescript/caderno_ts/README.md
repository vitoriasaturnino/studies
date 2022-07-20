# Tipos do TypeScript

### **Boolean**

O tipo boolean pode receber apenas dois valores true ou false:

<pre>
  let isOpen: boolean;
  isOpen = false;
</pre>

### **String**

Um conteúdo do tipo string pode ser declarado de três formas, com aspas simpres '':

<pre> 
  let message: string;
  message = 'Hello Word!';
</pre>

entre aspas duplas "":

<pre> 
  let message: string;
  message = "Hello Word!";
</pre>

E também entre crases ``, essa forma é utilizada normalmente nos casos em que é necessário concatenar strings e alguma outra variável:

<pre> 
  let message: string;
  message = `Hello Word! ${isOpen}`;
</pre>

### **Number**

O tipo number aceita valores do tipo inteiro, hexadecimal, flooat, binary, entre outros. Pode ser declarado da seguinte forma:

<pre>
  let idade: number
  idade = 22
</pre>

### **Array**

Para definir um array é preciso definir o tipo de dados que a lista vai armazenar, por exemplo number ou string. Podemos assinalar das seguintes formas:

<pre>
  let items: number[];
  items = [1, 2, 3];
</pre>

ou então:

<pre>
  let values: Array<number>;
  values = [1, 2, 3, 4];
</pre>

### **Tuple**

O tipo tupla pode ser entendido como um array em que já sabemos o número e o tipo de elementos que serão armazenados. Por exemplo uma tupla com dois elementos, um do tipo number e uma string, pode ser implementado da seguinte forma:

<pre>
  let title: [number, string];
  title = [1, "bolo"];
</pre>

### **Enum**

Enums permitem que um desenvolvedor defina um conjunto de constantes nomeadas. Pode ser definido assim:

<pre>
  enum Colors {
    white = '#fff',
    black = '#000'
  };
</pre>

### **Any**

O tipo any aceita qualquer valor(number, string, array...), deve ser usado com **cuidado** e somente em casos que não é possível saber qual tipo de valor a variável irá receber. Pode ser implementada da seguinte forma:

<pre>
  let coisa: any;
  coisa = [1, 2, 3];
  //ou 
  coisa: "qualquer coisa";
  //ou 
  coisa: 24;
</pre>

### **Void**

Void é o mesmo que vazio, pode ser usado por exemplo no caso de uma função que não restorna nada:

<pre>
  function logger(): void {
    console.log('oi');
  };
</pre>

### **Null e Undefined**

Pode ser usada quando o valor for nulo ou indefinido, na pratica os dois tipos não tem diferença, os dois dariam por exemplo afirmação de false já que não tem conteúdo nenhum. Não é indicado que seja usado como tipo primitivo de uma variável.

<pre>
 type Bla = String | undefined;
</pre>

### **Never**

É um tipo que nunca vai retorar, por exemplo quando vou exibir um erro na tela:

<pre>
  function error(): never{
    throw new Error("error");
  };
</pre>

### **Object**

Por definicção o tipo object é tudo aquilo que não é nem string, nem number ou qualquer um deses tipos, por exemplo:

<pre>
  let cart: object;
  cart = {
    key:  "foo";
  }
</pre>

Neste caso "Key" é nosso objeto.

# Inferencia de tipo

O TypeScript entende qual é o tipo da váriável mesmo que ele não seja delarado com base no valor em que ela está recebendo, por exemplo:

<pre>
  let nome = "Vitória";
</pre>

Como o valor passado é do tipo string ele já assume esse tipo para a váriável. Esse valor pode ser alterado futuramente, mas somente por uma outra string, caso tente setar um valor de algum outro tipo a linguagem acusará um erro.

# União de Tipos

Um tipo de união descreve um valor que pode ser um dos vários tipos. Usamos a barra vertical ( |) para separar cada tipo, como no exemplo:

<pre>
  function logDetails(uid: number | string, item: string){
    console.log(`A product with ${uid} has a title as ${item}.`);
  };
  function logInfo(uid: number | string, user: string) {
    console.log(`A user with ${uid} has a name as ${user}.`);
  }

  logDDetails(123, "sapato");
  logDDetails("13", "sapato");

  logInfo(123, "Vitória");
  logInfo("123", "Vitória");
</pre>

# Tipo Aliases

Tipo aliases nos permite nomear como com "apelidos" tipos primitivos, tuplas, tipos personalizados e qualquer outro tipo que você desejar. Para explicar melhor vou usar o mesmo exemplo acima.  
Como no caso nosso "uid" pode ser do tipo number e string eu posso declara-lo como um type aliases da seguinte forma:

<pre>
  //criando um tipo Uid que pode ser tanto string como number.
  type Uid = number | string;

  //informando que a minha var uid é do tipo Uid criado anteriormente.
  function logDetails(uid: Uid, item: string){
    console.log(`A product with ${uid} has a title as ${item}.`);
  };
  function logInfo(uid: Uid, user: string) {
    console.log(`A user with ${uid} has a name as ${user}.`);
  }
</pre>

O tipo Aliases também pode ser muito útil quando quero definir um tipo e o que ele aceita, como no exemplo abaixo:

<pre>
  type Plataforma = 'Windows' | 'Linux' | 'Mac Os';

  function renderPlataforma(platform: Plataforma){
    return plataform
  }

  renderPlataforma('ios');
</pre>

Para este exemplo receberíamos uma mesagem de erro, já que "ios" não foi definido como um tipo de plataforma que pode ser utilizado.
