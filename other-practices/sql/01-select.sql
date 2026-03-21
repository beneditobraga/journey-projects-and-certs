-- database: ecommerce

/* 

    Serve para selecionar dados de tabelas e diverdas operações.

*/ 

-- Sem consulta ao Banco.
SELECT 1994 AS Nascimento, 2026 AS AnoAtual, (2026-1994) AS Idade;

-- Consultando o Banco (escolha a identação que mais agrada).
SELECT name FROM categories;

SELECT
name,
price 
FROM products;
