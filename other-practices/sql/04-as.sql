-- database: ecommerce

/* 

    AS

        - Apelidos

            Serve para renomear as colunas para uma melhor visualização. 
            
*/ 
-- COLUNAS
SELECT 
    id, first_name AS Primeiro_Nome
FROM customers;

-- TABELAS
/*
    Renomeio de tabelas
*/
SELECT
    i.id, i.total_price
FROM items as i;

SELECT
    p.name AS Nome_Produto,
    c.name AS Nome_Categoria
FROM products AS p 
JOIN categories AS c ON p.category_id = c.id;
