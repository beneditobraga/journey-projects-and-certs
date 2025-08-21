-- CRIAÇÃO DO BANCO DE DADOS

-- Consta aqui partes dos requisitos de acordo com os scripts.

/*

    João deseja abrir uma pizzaria, porém apenas delivery.

    Necesita de um software para gerenciar os pedidos que recebe. 

*/

CREATE DATABASE pizzaria;

USE pizzaria;

-- CRIAÇÃO DAS TABELAS

/*

    Inicialmente os clientes irão fazer o pedido via site, podendo escolher:
        - Massa
        - Borda
        - Sabores (máximo 3)

*/

CREATE TABLE bordas (

	id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
    tipo VARCHAR(100)

);

CREATE TABLE massas (
	
    id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
	tipo VARCHAR(100)
    
);

CREATE TABLE sabores (
	
    id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
	nome VARCHAR(100)
    
);

/*

        Além disso, João precisa conseguir gerenciar estes pedidos. E também mudar o status de cada um:
        - Em produção
        - Entrega
        - Concluído

*/

CREATE TABLE status (

	id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
    tipo VARCHAR(100)
    
);

-- TABELAS COM CHAVES ESTRANGEIRAS

CREATE TABLE pizzas (

	id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
    borda_id INT NOT NULL,
	massa_id INT NOT NULL,
    FOREIGN KEY (borda_id) REFERENCES bordas(id),
    FOREIGN KEY (massa_id) REFERENCES massas(id)
);

CREATE TABLE pizza_sabor (

	id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
    pizza_id INT NOT NULL,
    sabor_id INT NOT NULL,
    FOREIGN KEY (pizza_id) REFERENCES pizzas(id),
    FOREIGN KEY (sabor_id) REFERENCES sabores(id)

);

CREATE TABLE pedidos (

	id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
    pizza_id INT NOT NULL,
    status_id INT NOT NULL,
    FOREIGN KEY (pizza_id) REFERENCES pizzas(id),
    FOREIGN KEY (status_id) REFERENCES status(id)

);
