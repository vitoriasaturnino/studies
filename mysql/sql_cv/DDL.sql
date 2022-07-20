CREATE DATABASE nomeBanco
default character set utf8
default collate utf8_general_ci;

#para acessar
USE cadastro;

CALTER TABLE "nomeTabela" (
  `campo_1` int NOT NULL,
  `campo_2` date NOT NULL,
  `campo_3` enum('tipo1', 'tipo2') NOT NULL,
  `campo_4` decimal(5,2) NOT NULL,
  `campo_5` text,
  PRIMARY KEY (`campo_1`)
) default charset = utf8;


#Alterando nome da base de dados
ALTER DATABASE nomeBanco RENAME TO novoNome;

#Alterando nome da tabela
ALTER TABLE nomeTabela RENAME TO novoNome;

#Adicioando um novo campo
ALTER TABLE nomeTabela
add column `campo_6` unsigned not null;

#Removendo alguma coluna
ALTER TABLE nomeTabela drop column `campo_6`;

#Adicionando coluna em um local expecífico
ALTER TABLE nomeTabela
add column `nome` varchar(15) AFTER `campo_1`;

#Adicionando um campo no início da tabela 
ALTER TABLE nomeTabela
add column `id` int FIRST;

#Modificando definições
ALTER TABLE nomeTabela
MODIFY COLUMN `id` int auto_increment not null;

#Renomeando coluna
ALTER TABLE nomeTabela 
CHANGE COLUMN `id` `user_id` int auto_increment not null;
#quando usar o change tenho que colocar também todos os constraints da coluna novamente e se precisar adicionar mais algum essa é a hora.

