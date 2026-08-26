create 	table Departamentos
(
	Id_Departamentos serial primary key,
	Nome varchar(100) not null,
	Area_atuacao varchar (100) not null
);

create table Tipo_Espaco
(
	Id_Tipo_Espaco serial primary key,
	Descricao text
);

create table Espaco
(
	Id_Espaco serial primary key,
	Id_Tipo_Espaco int, foreign key (Id_Tipo_Espaco) references Tipo_Espaco(Id_Tipo_Espaco),
	Nome varchar(100) not null,
	Quant_Maxima int,
	Localizacao varchar(200) not null
);

create table Patrocinadores
(
	Nome varchar(100) not null,
	Cidade varchar(100) not null,
	Telefone varchar(15) not null,
	CNPJ varchar(14) primary key not null
);

create table Apoia
(
	Id_Apoio serial primary key,
	CNPJ_FK varchar(14), foreign key (CNPJ_FK) references Patrocinadores(CNPJ)
);

create table Tipo
(
	Id_Tipo serial primary key,
	Descricao text
);

create table Eventos
(
	Id_Evento serial primary key,
	Nome varchar(100) not null,
	Id_Tipo_FK int, foreign key (Id_Tipo_FK) references Tipo(Id_Tipo),
	Data_realizacao date not null,
	Carga_Horaria int not null,
	Id_Departamentos_FK int, foreign key (Id_Departamentos_FK) references Departamentos(Id_Departamentos),
	Id_Espaco_FK int, foreign key (Id_Espaco_FK) references Espaco(Id_Espaco),
	Id_Apoia_FK int, foreign key (Id_Tipo_FK) references Apoia(Id_Apoio)
);

create table Palestrantes
(
	Id_Palestrantes serial primary key,
	Nome varchar(100) not null,
	Email varchar(100) not null,
	Telefone varchar(15) not null,
	Instituicao varchar(100)
);

create table Palestra_Evento
(
	Id_Participacao serial primary key,
	Id_Eventos int, foreign key (Id_Eventos) references Eventos(Id_Evento),
	Id_Palestrantes int, foreign key (Id_Palestrantes) references Palestrantes(Id_Palestrantes)
);

create table Estudantes
(
	Num_Matricula serial primary key,
	Nome_Estudante varchar(100) not null,
	Curso varchar(100) not null,
	Periodo varchar(10) not null,
	E_mail varchar(200) not null
);

create table Vai
(
	Id_Eventos_FK int, foreign key (Id_Eventos_FK) references Eventos(Id_Evento),
	Id_Estudantes_FK int, foreign key (Id_Estudantes_FK) references Estudantes(Num_Matricula)
);

create table Inscricao
(
	Id_Inscricao serial primary key,
	Id_Estudante_FK int, foreign key (Id_Estudante_FK) references Estudantes(Num_Matricula),
	Data_Inscricao date not null,
	Verificacao varchar(12) not null
);

create table Certificador
(
	Id_Estudante_FK int, foreign key (Id_Estudante_FK) references Estudantes(Num_Matricula),
	Id_Inscricao_FK int, foreign key (Id_Inscricao_FK) references Inscricao(Id_Inscricao),
	Emissao date not null,
	Carga_Horaria int not null
);

insert into Departamentos (Nome, Area_atuacao) values ('Laboratório 01', 'Programação');

insert into Tipo_Espaco (Descricao) values ('Sala cheia de Computadores');

insert into Espaco (Id_Tipo_Espaco, Nome, Quant_Maxima, Localizacao) values (1,'SENAI', 25, 'R. Pedro Alvares Cabral, 905 - São Francisco de Assis, Dois Vizinhos - PR, 85660-000');

insert into Patrocinadores (Nome, Cidade, Telefone, CNPJ) values ('CISS', 'Dois Vizinhos', '(46)3536-8500', '82.213.604/0001-80');

insert into Apoio (CNPJ) values ('82.213.604/0001-80');

insert into Tipo (Descricao) values ('Um evento de programadores que competem em equipes para desenvolver um jogo ou programa da maneira mais rápida e funcional possível.');

insert into Eventos (Nome, Id_Tipo_FK, Data_realizacao, Carga_Horaria, Id_Departamentos_FK, Id_Espaco_FK, Id_Apoia_FK) values ('BPS', 1, '2024-06-15', 4, 1, 1, 1);

insert into Palestrantes (Nome, Email, Telefone, Instituicao) values ('Kevin Guimaraes', 'kevinguimaraes@gmail.com', '(46) 99905-2583', 'SENAI');

insert into Palestra_Evento (Id_Eventos, Id_Palestrantes) values (1,1);

insert into Estudantes (Nome_Estudante, Curso, Periodo, E_mail) values ('João Gabriel', 'Programação', 'Tarde', 'joaogabriel@gmail.com');
insert into Estudantes (Nome_Estudante, Curso, Periodo, E_mail) values ('Kazuha', 'Programação', 'Tarde', 'kaedeira@gmail.com');
insert into Estudantes (Nome_Estudante, Curso, Periodo, E_mail) values ('Sanji', 'Gastronomia', 'Manhã', 'sanji@gmail.com');
insert into Estudantes (Nome_Estudante, Curso, Periodo, E_mail) values ('Celorde', 'Programação', 'Noite', 'celorde@gmail.com');

insert into Vai (Id_Eventos_FK, Id_Estudantes_FK) values (1,1);
insert into Vai (Id_Eventos_FK, Id_Estudantes_FK) values (1,3);
insert into Vai (Id_Eventos_FK, Id_Estudantes_FK) values (1,4);

insert into Inscricao (Id_Estudante_FK, Data_Inscricao, Verificacao) values (1, '2024-06-12','Confirmador');
insert into Inscricao (Id_Estudante_FK, Data_Inscricao, Verificacao) values (1, '2024-06-13','Cancelador');
insert into Inscricao (Id_Estudante_FK, Data_Inscricao, Verificacao) values (2, '2025-06-20', 'Inscritor');
insert into Inscricao (Id_Estudante_FK, Data_Inscricao, Verificacao) values (1, '2024-06-14', 'Confirmador');

insert into Certificador (Id_Estudante_FK, Id_Inscricao_FK, Emissao, Carga_Horaria) values (1, 1, '2024-07-15',3);
insert into Certificador (Id_Estudante_FK, Id_Inscricao_FK, Emissao, Carga_Horaria) values (3, 1, '2024-07-15',1);
insert into Certificador (Id_Estudante_FK, Id_Inscricao_FK, Emissao, Carga_Horaria) values (4, 1, '2024-07-15',4);

drop table Departamentos;
drop table Tipo_Espaco;
drop table Espaco;
drop table Patrocinadores;
drop table Apoia;
drop table Tipo;
drop table Eventos;
drop table Palestrantes;
drop table Palestra_Evento;
drop table Estudantes;
drop table Vai;
drop table Inscricao;
drop table Certificador;

select * from Departamentos;
select * from Tipo_Espaco;
select * from Espaco;
select * from Patrocinadores;
select * from Apoia;
select * from Tipo;
select * from Eventos;
select * from Palestrantes;
select * from Palestra_Evento;
select * from Estudantes;
select * from Vai;
select * from Inscricao;
select * from Certificador;

