CREATE TABLE dimensoes
(
	id serial PRIMARY KEY,
	nome varchar(4) NOT NULL
);

SELECT * FROM dimensoes;
DROP TABLE dimensoes;

CREATE TABLE registros_de_vida
(
	id serial PRIMARY KEY,
	nome varchar(50) NOT NULL,
	omega numeric NOT NULL,
	id_dimensao int, FOREIGN KEY (id_dimensao) references dimensoes(id)
);

SELECT * FROM registros_de_vida;
DROP TABLE registros_de_vida;

INSERT INTO dimensoes(nome) values
('C875'),
('C774'),
('C999'),
('C321');

INSERT INTO registros_de_vida(nome,omega,id_dimensao) values
('Douglas Gabriel Ribeiro Avila',0.742,1),
('Douglas Ribeiro Avila',0.531,1),
('Douglas G. Ribeiro Avila',0.864,2),
('Igor Antonio De Almeida',0.425,1),
('Igor Almeida',0.782,2),
('Igor Antonio Almeida',0.316,2),
('João Gabriel Alves Garlet',0.653,1),
('João Gabriel Garlet',0.287,2),
('João G. Alves Garlet',0.915,3),
('Luiz Carlos Vescovi',0.478,2),
('Luiz Vescovi',0.694,1),
('Luiz C. Carlos Vescovi',0.352,4),
('Marcos Samuel Rodrigues',0.821,1),
('Marcos Rodrigues',0.264,2),
('Marcos S. Rodrigues',0.573,3),
('Nicolas Gabriel Marchi Ferreira',0.391,2),
('Nicolas Marchi Ferreira',0.728,1),
('Nicolas Gabriel Ferreira',0.612,4),
('Ana Cristina Souza',0.452,1),
('Fernanda Oliveira',0.537,2),
('Acassio Pereira',0.683,3),
('Ariel Santos',0.349,4),
('Gabriel Alves',0.771,1),
('Marcos Antonio',0.498,2);

UPDATE registros_de_vida SET nome = 'João Gabriel Alves Garlet' WHERE id = 7;

SELECT d.nome, rv.nome, rv.omega, ROUND(omega*1.618 ,3) AS Fator_N FROM dimensoes AS d
INNER JOIN registros_de_vida AS rv ON rv.id_dimensao = d.id
WHERE d.nome IN ('C875','C774')
and(rv.nome LIKE 'Douglas%'
or rv.nome LIKE 'Igor%'
or rv.nome LIKE 'João%'
or rv.nome LIKE 'Luiz%'
or rv.nome LIKE 'Marcos%'
or rv.nome LIKE 'Nicolas%')
ORDER BY omega DESC;