CREATE TABLE alunos (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(100),
    idade INT,
    cidade VARCHAR(50),
    curso VARCHAR(50),
    nota NUMERIC(4,2)
);

INSERT INTO alunos (nome, idade, cidade, curso, nota) VALUES
('Ana Silva', 18, 'Curitiba', 'Programação', 8.5),
('Bruno Santos', 21, 'Londrina', 'Redes', 7.0),
('Carlos Souza', 19, 'Curitiba', 'Programação', 9.0),
('Daniel Oliveira', 25, 'Maringá', 'Banco de Dados', 6.5),
('Eduarda Lima', 20, 'Curitiba', 'Redes', 8.0),
('Felipe Costa', 17, 'Londrina', 'Programação', 5.5),
('Gabriela Alves', 22, 'Maringá', 'Banco de Dados', 9.5),
('Henrique Rocha', 19, 'Curitiba', 'Redes', 7.5),
('Isabela Martins', 20, 'Londrina', 'Programação', 8.8),
('João Pereira', 23, 'Curitiba', 'Banco de Dados', 6.0),
('Karen Mendes', 18, 'Maringá', 'Programação', 9.2),
('Lucas Ferreira', 26, 'Curitiba', 'Redes', 7.8);

select * from alunos;

select nome,idade,curso from alunos;

select nome,cidade from alunos;

select idade+1 as Idade_futura from alunos;

select nome,idade from alunos where idade >= 18;

select nome,cidade from alunos where cidade = 'Curitiba';

select nome,nota from alunos where nota > 8;

select nome, cidade from alunos where not cidade = 'Curitiba';

select nome,idade,curso from alunos where idade >= 18 and curso = 'Programação';

select nome,cidade from alunos where cidade = 'Curitiba' or cidade = 'Londrina';

select nome,nota,cidade from alunos where nota >= 8 and cidade = 'Curitiba';

select nome,idade from alunos where idade between 18 and 20;

select nome,nota from alunos where nota between 7 and 9;

select nome,curso from alunos where curso in ('Programação','Redes');

select nome,cidade from alunos where cidade in ('Curitiba','Londrina','Maringá');

select nome from alunos where nome like 'A%';

select nome from alunos where nome like '%a';

select nome from alunos where nome ilike '%ana%';

select nome from alunos where nome ilike 'C%';

select distinct cidade from alunos;

select distinct curso from alunos;

select * from alunos order by nome asc; 

select * from alunos order by nota desc;

select * from alunos order by idade asc;

select * from alunos order by cidade,nome asc;

select * from alunos limit 5;

select * from alunos order by nota desc limit 5;

select * from alunos order by nota desc limit 3 offset 3;