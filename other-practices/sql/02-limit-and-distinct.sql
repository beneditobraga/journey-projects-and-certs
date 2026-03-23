-- database: ecommerce

/* 

    LIMIT and DISTINCT
    
        LIMIT
            Serve para limitar a quantidade de linhas, assim não sobrecarregando a consulta.

        DISTINCT
            Trás apenas valores que não se repetem para a coluna selecionada. 
*/ 

-- LIMIT
SELECT
*
FROM categories 
LIMIT 5;

-- DISTINCT
SELECT DISTINCT category_id FROM products;

SELECT DISTINCT first_name FROM customers;

-- DISTINCT with COUNT
SELECT COUNT(DISTINCT first_name) FROM customers;