# Como configurar um projeto TypeScript

Ferramentas necessárias:

- VSCode;
- Node.Js;
- Yarn ou npm;

#

### **1º passo**

Depois de criar o diretório do projeto, de dentro da pasta, usando **Yarn** rode o comando <pre> $ yarn init -y</pre>
em seguida

<pre> $ yarn install</pre> dessa forma serão criados os seguintes aquivos package.json, yarn.lock e a pasta node_modules com .yarn-integrity.

#

Ou usando npm, utiize o comando <pre> $ npm init -y </pre>
logo em seguida

<pre> $ npm install</pre> então terá criado os arquivos package.json e package-lock.json.

#

### **2º passo**

Adicionar o Express que é um framework do Node.Js ao projeto com o seguinte comando:

<pre>$ yarn add express</pre>

ou

<pre>$ npm install express --save</pre>

Agora é preciso adicionar os tipos do express:

<pre>$ yarn add @types/express</pre>

ou

<pre>$ npm install @types/express</pre>

#

### **3º passo**

Nesse passo vamos instalar o TypeScript como uma dependencia de desenolvimento, para evitar erros que possam acontecer por divergências entre a versão que podeter sido instalada globalmente e a que será usada para desenvolvimento do projeto, usando o comando:

<pre>
$ yarn add -D typescript
</pre>

ou

<pre>
$ npm install typescript --save-dev
</pre>

#

### **4º passo**

Criar um servidor com Express, na raiz do projeto crie uma pasta "src", dentro dessa pasta podemos então criar o nosso server.ts e importar o Express:

<pre>
  import express from "express";

  const app = express();

  app.get('/', (req, res) => {
    return res.send('Hello Word!');
  })

  app.listen(3333);
</pre>

#

### **5º passo**

Configurações necessárias para transpilação do código TS para JS.
Como o Node não consegue entender nosso código escrito em TypeScript é preciso realizar a transpilação para JavaScript da senguinte forma:

1. Com o comando `$ yarn tsc --init` ou `$ npm tsc --init` vamos criar o arquivo **tsconfig.json** (caso já tenha o TypeScript instalado globalmente em sua máquina use somente "tsc --init"), que já vem com algumas configuraçõs pré setadas. Para organizar melhor onde ficará nosso código transpilado para JS, na configiração **"outDir"**, após o "./" adicione o nome "dist", está será a pasta onde o código transpilado ficará armazenado.

2. Para automatizar este processo de transpilação do código vamos utilizar uma lib chamada TS-node-dev que vai ficar de olho em quaisquer alterações feitas no arquivo .ts e já realizar a tranpilação para js sem muitas complicações, podemos inslalar com o seguinte comando:

<pre>$ yarn add ts-node-dev -D</pre>

ou

<pre>$ npm i ts-node-dev --save-dev</pre>

Ao fim da instalação, no arquivo **package.json** vamos adicionar o ts-node-dev aos scripts com um script de desenolvimento:

<pre>
  "scripts":{
      "dev:server": "ts-node-dev --respawn --transpile-only src/server.ts"
  }
</pre>

As flags **--respawn** e **--trasnpile-only** vão garantir que não sejam feitas verificações como erros de sintaxe no código ts antes da transpilação, pois realizar esse tipo de verificação em desenvolvimento acaba sendo bastante custoso, como esse tipo de verificaçõ pode ser feita de outras formas, até mesmo com a ajuda do próprio editor de texto faremos somente a transpilação diretamente.

#

### **6º passo**

Levantar o servidor  
Após as configurações anteriores é possível levantar o servidor com o seguinte comando:

<pre>$ yarn dev:server</pre>

ou

<pre>$ npm run dev:server</pre>

e acessar pelo navegador o **localhost:3333** nesse caso.

#

Os projetos [ts_npm](/ts_npm/) e [ts_yarn](/ts_yarn/) foram inicializados utilizando os respectivos gerenciadores como critério de aprovação desse tutorial.

<p align="center">Feito com 💗 Vitória.</p>

#
