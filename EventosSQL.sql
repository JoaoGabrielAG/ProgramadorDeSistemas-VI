create 	table Departamentos
(
	Id_Departamentos serial primary key,
	Nome varchar(100) not null,
	Area_atuacao varchar (100) not null
);

create table Eventos
(
	Id_Evento serial primary key,
	Nome varchar(100) not null,
	Descricao text,
	Data_realizacao date not null,
	Carga_Horaria int not null,
	Id_Departamentos_FK int, foreign key (Id_Departamentos_FK) references Departamentos(Id_Departamentos),
	Id_Espaco_FK int, foreign key (Id_Espaco_FK) references Espaco(Id_Espaco),
	Id_Tipo_FK int, foreign key (Id_Tipo_FK) references Tipo(Id_Tipo),
	Id_Apoia_FK int, foreign key (Id_Tipo_FK) references Apoia(Id_Apoio)
);

create table Tipo
(
	Id_Tipo serial primary key,
	Descricao text
);

create table Patrocinadores
(
	Cidade varchar(100) not null,
	Telefone int not null,
	CNPJ varchar(100) primary key not null
);

create table Apoia
(
	Id_Apoio serial primary key,
	CNPJ_FK varchar(100), foreign key (CNPJ_FK) references Patrocinadores(CNPJ)
);

create table Espaco
(
	Id_Espaco serial primary key,
	Id_Tipo_Espaco int, foreign key (Id_Tipo_Espaco) references Tipo_Espaco(Id_Tipo_Espaco),
	Nome varchar(100) not null,
	Quant_Maxima int,
	Localizacao varchar(200) not null
);

create table Tipo_Espaco
(
	Id_Tipo_Espaco serial primary key,
	Descricao text
);

create table Palestrantes
(
	Id_Palestrantes serial primary key,
	Nome varchar(100) not null,
	Email varchar(100) not null,
	Telefone int not null,
	Instituicao varchar(100)
);

create table Palestra_Evento
(
	Id_Participacao serial primary key,
	Id_Eventos int, foreign key (Id_Eventos) references Eventos(Id_Evento),
	Id_Palestrantes int, foreign key (Id_Palestrantes) references Palestrantes(Id_Palestrantes)
);

create table Vai
(
	Id_Eventos_FK int, foreign key (Id_Eventos_FK) references Eventos(Id_Evento),
	Id_Estudantes_FK int, foreign key (Id_Estudantes_FK) references Estudantes(Num_Matricula)
);

create table Estudantes
(
	Num_Matricula serial primary key,
	Nome_Estrudante varchar(100) not null,
	Curso varchar(100) not null,
	Periodo int not null,
	E_mail varchar(200) not null
);

create table Inscricao
(
	Id_Inscricao serial primary key,
	Id_Estudante_FK int, foreign key (Id_Estudante_FK) references Estudantes(Num_Matricula),
	Data_Inscricao date not null,
	Verificacao varchar(100) not null
);

create table Certificador
(
	Id_Estudante_FK int, foreign key (Id_Estudante_FK) references Estudantes(Num_Matricula),
	Id_Inscricao_FK int, foreign key (Id_Inscricao_FK) references Inscricao(Id_Inscricao),
	Emissao date not null,
	Carga_Horaria int not null
);

DROP SCHEMA public CASCADE;