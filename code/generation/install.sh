# пример добавление файлов в postgresql db_13_7.csv

create database db_people owner=lev;
create table if not exists db_13_7
(
 id int primary key,
 surname varchar,
 age int,
 cabinet int,
 post varchar,
 workd int,
 sex varchar,
 children int,
 salary int,
 fine int,
 build int,
 ci varchar,
 place int
);
\copy db_13_7(id, surname, age, cabinet) from '/tmp/db_13_7.csv' delimiter ',' csv header;

