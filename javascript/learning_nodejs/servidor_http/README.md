## Criando um projeto com npm

- Do seu terminal, crie uma pasta para o projeto com o comando `$ mkdir learning_node`
- Entre na pasta criadada `$ cd learning_node`
- De dentro da pasta com o comando `$ npm init` podemos iniciar as configurações do pojeto. Caso fique alguma dúvida expecífica na hora de configurar é só dar um google sobre o [arquivo package.json](https://www.google.com/search?q=arquivo+package.json&rlz=1C1FCXM_pt-PTBR999BR999&oq=arquivo+package&aqs=chrome.1.69i57j0i512l4j0i22i30l2j0i15i22i30j0i22i30l2.8415j0j7&sourceid=chrome&ie=UTF-8), esse é o arquivo que teremos após concluir as configurações. É neste aquio que estão contidas todas as informações sobre as configurações, dependências e scripts automatizados do projeto.

## Criando um servidor Node.Js

Para iniciar o processo de criação vamos organixar a estrutura de pastas criando um diretório **src** e dentro dele um arquivo **http.js**.

Para construir um servidor http precisaremos de um módulo http nativo do node.

Na pasta src crie também um arquivo index.js que será o entry point do projeto; podemos adicionar o módulo http com a seguinte linha de código

<div align="center">
  <img width="300" src="https://user-images.githubusercontent.com/68754092/177870076-bdf124a4-2e77-45ed-9047-f9474572262d.png">
</div>

Agora sim, vamos voltar ao arquivo **http.js** e criar nosso servidor.

O primeiro passo é importar o http criado setando ele em uma variável

<div align="center">
  <img width="350" src="https://user-images.githubusercontent.com/68754092/177871365-0bfd5976-bdab-4066-a5d4-42cce4cf7d2a.png">
</div>

O passo seguinte é definir a porta em que o servidor vai rodar

<div align="center">
  <img width="280" src="https://user-images.githubusercontent.com/68754092/177871529-64f548eb-2117-46b4-863c-252266e3cc9d.png">
</div>

Agora vamos criar o servidor em si. Para isso vamos usar o módulo http e o método createServer() que irá receber uma arrow function com dois parametros, o **req**(request) e o **res**(response).
A requeste é a requisição que o usuário faz quando acessa a aplicação e o responde é a resposta que o servidor devolve.

<div align="center">
  <img width="550" src="https://user-images.githubusercontent.com/68754092/177873911-35714b93-f4db-4296-811a-1bc75bcc99c0.png">
</div>
Neste exemplo o usuário requisita a url da página home e o servidor devolve a um html que será reenderizado na página home.

Para executar o server é preciso fazer que ele escute a porta anteriormente definida

<div align="center">
  <img width="600" src="https://user-images.githubusercontent.com/68754092/177871677-f14ece79-7229-4f4d-a3f4-1f8cae28ea83.png">
</div>

### Iniciando o servidor criado

Para iniciar o servidor vamos adicionar ao package.json um script automatizado e fazer o uso de um módulo externo do node, o **Nodemon** ele ficará de olho nas mudanças feitas no diretório do projeto e reiniciar a aplicação automaticamente.

1. Para Instalar como dependencia de desenvolvimento use o comando `$ npm install nodemon --save-dev`.

2. No package.js adione o seguinte script
 <div align="center">
  <img width="370" src="https://user-images.githubusercontent.com/68754092/177871753-8655db85-a71b-4fde-9804-8c6ee05a6d4b.png">
</div>

3. No terminal, inicie o servidor com o comando `$ npm run start:dev` e no seu navegador acesse [http://localhost:8080](http://localhost:8080)
