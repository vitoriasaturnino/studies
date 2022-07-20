create database cadastro
--configurações para caracteres latinos
default character set utf8
default collate utf8_general_ci;

use cadastro

 --todo cractere em SQL deve estar entre aspas simples '' e toda palavra de definição entre crases ``
CREATE TABLE pessoas (
  --NOT NULL não permite que o cadastro seja reaizado se o compo estiver vazio
  `id` int NOT NULL auto_increment,
  `nome` varchar(30) NOT NULL,
  `nascimento` date, --YYYY-MM-DD
  `sexo` enum('F', 'M'),
  --VALORES DECIMAL DEVEM SER SEPARADOS POR .
  --decimal, numero antes da virgula define quantidade de espaços, neste caso 5 e o número depois da vírgula define quatos desses números estarão depois da virgula ex.: 123,20
  `peso` decimal(5,2),
  `altura` decimal(3,2),
  --default 'brasileira' caso nenhuma naconalidade tenha sido cadastrada
  `nacionalidade` varchar(20) DEFAULT 'brasileira',
  --para definir inha chave primária
  PRIMARY KEY (id)
) default charset = utf8;

--tipos de comandos
--DDL(Data Definition Language) Create Table, create database, alter table, drop table
--DML (Data Manipulation Language) Insert into

--INSERINDO DADOS NA TABLE SELECIONADA
-- não inseri um value para `id` pois está como auto increment, nesse caso posso deixar como
-- +--------+
-- | id     | 
-- +--------+
-- | defaul |
-- +--------+ que é o padrao

insert into pessoas
(`id`, `nome`, `nascimento`, `sexo`, `peso`, `altura`, `nacionalidade`)
values
(default ,'Vitória', '1999-12-08', 'F', '075.00', '1.50', 'brasileira')
values
(default, 'Raphael', '1997-12-30', 'M', '095.00', '1.70', 'brasileiro');
values
(default, 'Roineide', '1972-10-08', 'F', '090.00', '1.65', 'brasileiro');

--caso a ordem de inserção dos valores na tabela seja extamente a ordem dos campos posso fazer da seguinte forma:
insert into pessoas values 
(default, 'Pedro', '1969-05-09', 'M', '060.00', '1.65', 'brasileiro');

--cadastrando varias pessoas de uma vez
insert into pessoas
(`id`, `nome`, `nascimento`, `sexo`, `peso`, `altura`, `nacionalidade`)
values
(default ,'Verônica', '2001-05-12', 'F', '055.00', '1.50', 'brasileira'),
(default ,'Carlos Algusto', '2001-06-17', 'F', '070.00', '1.70', 'brasileir0'),
(default ,'Maria', '1932-05-22', 'F', '055.00', '1.50', 'brasileira');

--para mostrar os dados cadastrados na taela toda uso *
select * from pessoas;

--AULA 06 


ALTER DATABASE nomeBanco RENAME TO novoNome;

--Adicioando um novo campo de profissão
Alter table pessoas
add column profissao varchar(15);

--removendo alguma coluna
alter table pessoas drop column profissao;

--adicionando coluna num local expecífico
alter table pessoas
add column profissao varchar(10) AFTER nome;

--para adicionar m campo no início da tabela 
alter table pessoas
add column codigo int FIRST;

--MODIFICANDO DEFINIÇÔES
alter table pessoas
MODIFY COLUMN profissao varchar(20) not null default '';

--Renomeando coluna
alter table pessoas 
CHANGE COLUMN profissao prof varchar(20) not null;
-- quando usar o change enho que colocar também todos os constraints da coluna novamente

--RENOMEANDO TODA A TABELA
alter table pessoas
RENAME TO gafanhotos;

mysql> CREATE TABLE IF NOT EXISTS cursos (
  `nome` varchar(20) NOT NULL UNIQUE,
  `descricao` text,
  `carga` int UNSIGNED,
  `totalAulas` int,
  `ano` year DEFAULT '2022'
) DEFAULT CHARSET = utf8;


--adicionando campo par id do curso
alter table cursos
add column curso_id int FIRST;

--add primary key no cmpo id
alter table cursos
add PRIMARY KEY (curso_id);

--APAGENDO TABElA ou O BANCO
DROP TABLE cursos;
DROP DATABASE cadastros;