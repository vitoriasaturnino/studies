--Manipulando linhas (UPDATE, DELETE e TRUNCATE)

insert into cursos 
(`curso_id`, `nome`, `descricao`, `carga`, `totalAulas`, `ano`)
value
('1', 'lavar roupa', 'aprenda a tirar manchas das suas roupas', '50', '30', '2021');


insert into cursos 
(`curso_id`, `nome`, `descricao`, `carga`, `totalAulas`, `ano`)
value
('2', 'passear com o dog', 'leve seu melhor amigo para passear sem ser arrastado', '1000', '56', '2020');

--linhas
UPDATE nomeTabela 
SET colunaASerAlterada = 'novoNome'
WHERE ID_PrimaryKey = 'numeroDaLinhaDesejada';

