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

SELECT * FROM alunos;

SELECT nome, idade, curso FROM alunos;

SELECT nome, cidade FROM alunos;

SELECT idade + 1 AS Idade_futura FROM alunos;

SELECT nome, idade FROM alunos
WHERE idade >= 18;

SELECT nome, cidade FROM alunos
WHERE cidade = 'Curitiba';

SELECT nome, nota FROM alunos
WHERE nota > 8;

SELECT nome, cidade FROM alunos
WHERE NOT cidade = 'Curitiba';

SELECT nome, idade, curso FROM alunos
WHERE idade >= 18 AND curso = 'Programação';

SELECT nome, cidade FROM alunos
WHERE cidade = 'Curitiba' OR cidade = 'Londrina';

SELECT nome, nota, cidade FROM alunos
WHERE nota >= 8 AND cidade = 'Curitiba';

SELECT nome, idade FROM alunos
WHERE idade BETWEEN 18 AND 20;

SELECT nome, nota FROM alunos
WHERE nota BETWEEN 7 AND 9;

SELECT nome, curso FROM alunos
WHERE curso IN ('Programação', 'Redes');

SELECT nome, cidade FROM alunos
WHERE cidade IN ('Curitiba', 'Londrina', 'Maringá');

SELECT nome FROM alunos
WHERE nome LIKE 'A%';

SELECT nome FROM alunos
WHERE nome LIKE '%a';

SELECT nome FROM alunos
WHERE nome ILIKE '%ana%';

SELECT nome FROM alunos
WHERE nome ILIKE 'C%';

SELECT DISTINCT cidade FROM alunos;

SELECT DISTINCT curso FROM alunos;

SELECT * FROM alunos
ORDER BY nome ASC; 

SELECT * FROM alunos
ORDER BY nota DESC;

SELECT * FROM alunos
ORDER BY idade ASC;

SELECT * FROM alunos
ORDER BY cidade, nome ASC;

SELECT * FROM alunos LIMIT 5;

SELECT * FROM alunos
ORDER BY nota DESC LIMIT 5;

SELECT * FROM alunos
ORDER BY nota DESC LIMIT 3 OFFSET 3;

SELECT COUNT(*) AS Quantidade FROM alunos;

SELECT COUNT(curso) AS Quant_Programacao FROM alunos
WHERE curso = 'Programação';

SELECT ROUND(AVG(nota),2) AS Media FROM alunos;

SELECT MAX(nota) AS Maior_Nota FROM alunos;

SELECT MIN(Nota) AS Menor_Nota FROM alunos;

SELECT SUM(nota) AS Soma_Nota FROM alunos;

SELECT MIN(nota) AS Menor_Nota, MAX(nota) AS Maior_Nota, ROUND(AVG(nota),2) AS Media FROM alunos;

SELECT cidade, COUNT(*) AS Quantidade FROM alunos
GROUP BY cidade;

SELECT curso, COUNT(*) AS Quantidade FROM alunos
GROUP BY curso;

SELECT cidade, ROUND(AVG(nota),2) AS Media FROM alunos
GROUP BY cidade;

SELECT curso, MAX(nota) AS Maior FROM alunos
GROUP BY curso;

SELECT cidade, COUNT(*) AS Quant_Alunos FROM alunos
GROUP BY cidade
HAVING COUNT(*) >= 3;

SELECT curso, COUNT(*) AS Quant_Alunos FROM alunos
GROUP BY curso
HAVING COUNT(*) >= 3;

SELECT curso, ROUND(AVG(nota),2) AS Media FROM alunos
GROUP BY curso
hAVING ROUND(AVG(nota),2) > 7;

SELECT cidade, COUNT(*) AS quantidade_alunos, ROUND(AVG(nota),2) AS media FROM alunos 
GROUP BY cidade 
HAVING COUNT(*) >= 3 AND ROUND(AVG(nota),2) > 7
ORDER BY media DESC;

SELECT nome, idade, nota FROM alunos
WHERE curso = 'Programação' AND nota > 7
ORDER BY nota DESC
LIMIT 3;

