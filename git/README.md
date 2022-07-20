# Git e GitHub

## Commit 
Comando usado para versionar o código remotamente, eles salvam as mudanças feitas, basicamente fuincionando como pontos em uma linha do tempo de versionamento.
para comitar uma alteração use o seguinte comando:        
`` $ git commit -m "mensagem do commit"``

## Push
O comando faz com que todos os arquivos que formam comitados no meu repositório local sejam enviados para o meu repositório remoto na branch desejada:   
`` $ git push -u origin nomeBranch`` 
 
## Pull 
Esse comando funciona da forma inversa ao comando __push__, ele tem a função de trazer as alteraações do repositório remoto para seu repositório local.
De dentro da pasta do projeto é só digitar o comando:  
`` $ git pull ``

## Branch
Branchs são ramifcações criadas no projeto, para criar uma nova branch a partir da branch atual use comando:   
`` $ git checkout -b nomeDaNovaBranch ``

O comando "checkout" manda você diretamente para dentro da branch criada.

Para navegar entre as branchs use o comando `` $ git chckout nomeDaBranch ``      

> ### ⚠️ Importante                                              
> A mudança de uma branc para outra só pode ser feitas se as mudanças da branch atual tiverem sido comitadas. "- Mas as minhas muanças ainda esão em andamento e não estão protas para um commit, e agora?"  
Aqui estão alguns comandinhos para ajudar com isso:   
`` $ git stash `` stash funciona no modelo de plilha e é como uma linha do tempo que vai guadar suas alterações sem fazer um commit delas    
`` $ git stash list `` com esse comando você pode verificar a lista de stashs   
`` $ git stash apply `` volta traz as alterações do seu último stash de volta ara a branch de desenvolvimento

## Merge
Nada mais é que a junção de duas branchs, para fazer um merge devo estar na branch que vai receber o código com as alterações prontas para isso uso o comando:    
`` $ git merge nomeDaBranchQueTemAsMudançasProntas``

## Remote
O comando remote funciona estabelecendo uma conexão entre
entre o seu repositório local(Git) e o repositório remoto(GitHub) :   
`` $ git remote add origin https://gitHub.com/seuUserName/nomeDoRepoRemoto.git `` 

#

## ⭐ Mais alguns comandos muito úteis para usar o Git

- `` $ git init `` cria um repositório remoto "vazio" apenas com todas as dependências necessárias para o git funcionar 

- `` $ Git clone https://github.com/userName/linkParaORepo.git `` para clonar um repositório remoto

- `` $ git status `` para verificar quais arquivos receberam mudanças e estão prontas ou não para serem comitados.
Caso um arquivo que precise ser comitao ainda não estaja "pronto" uso um dos seguintes comandos para colocalos em stagin:    
  - `` $ git add . `` ou `` $ git add -A ``para adicionar todos os arquivos de uma vez.   
  - `` $ git add nomeArquivo `` para adicionar apenas um aquivo específico.     

- `` $ git checkout nomeDOArquivo`` para desfazer alterações neste arquivo

- ``$ git branch `` ou ``$ git branch -av `` exibe uma lista com todas as branchs existetes no projeto

- `` $ git log `` mostra todos os commits feitos no repositório do mais novo ara o mais antigo

- `` $ git log -p nomeDoArquivo `` mostra todo o histórico de mudanças realizadas no aquivo especificado até o momento

- `` $ git revert numeroDoHash `` desfaz  um commit feito de acordo com o número do hash, que pose ser cnseguido pelo comando ``git log -- oneline``






