--Para inserir valores em tabelas usamos um comando DML o INSERT INTO

--Para inserir os valores seguindo a ordem de campos da tabela apenas 
--separando cada valor por vírgula

INSERT INTO  pessoas values
('1', '1999-12-08', 'tipo1', '75.00', 'blá blá blá...');

--caso queira inserir valor em algum campo expecícico é necessário 
--informar também o campo além dos valores a serem armazenados, da seguinte forma:
INSERT INTO 
(`campo_2`, `campo_3`, `campo_4`)
values
('1997-12-30', 'tipo2', '90.00');

--É importante destacar que definições devem estar dentro de `crases` 
--e valres dentro de 'aspas simples', mesmo os valores numéricos

UPDATE









DELETE