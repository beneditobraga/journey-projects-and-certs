-- database: ecommerce

/* 

    OPERADORES

        - Adição, subtração, multiplicação e divisão.

    COMPARAÇÃO

        1 = VERDADEIRO
        0 = FALSO

            = comparação
            > maior
            < menor
            >= maior ou igual
            <= menor ou igual
            != diferente
            between entre
            like filtro, busca
            in dentro, filtro, busca
            is null valores nulos
            is not null valores não nulos
            is true valores verdadeiros
            is false valores falsos
            
*/ 

-- EXEMPLOS OPERADORES
SELECT
    7 + 7 AS Soma,
    14 - 4 AS Subtração,
    73 * 4 AS Multiplicação,
    12 / 3 AS Divisão;

-- EXEMPLOS COMPARAÇÃO
/*
    1 = VERDADEIRO
    0 = FALSO
*/
SELECT
    5 = 5,
    1 > 10,
    60 <= 60,
    17 != 20;

/*
    BETWEEN
*/
SELECT
    10 BETWEEN 8 AND 15,
    -13 BETWEEN 0 AND 13;

SELECT
    *
FROM products 
WHERE price BETWEEN 30 AND 80;

/*
    LIKE
*/

-- Iniciado em J 
SELECT
    *
FROM customers 
WHERE first_name LIKE "J%";

-- Finalizado com r
SELECT
    *
FROM customers 
WHERE first_name LIKE "%r";

-- 01 Iniciados com J e terminado em r
SELECT
    *
FROM customers 
WHERE first_name 
LIKE "J%" AND first_name LIKE "%r";

-- 02 Iniciados com J e terminado em r
SELECT
    *
FROM customers 
WHERE first_name 
LIKE "J%r";

-- IN
/*
    Dentro de um intervalo específico
*/
SELECT
    *
FROM products 
WHERE price IN (10, 11, 15);

SELECT 
    *
FROM customers 
WHERE state IN ("Acre", "Ceará");

-- IS NULL
SELECT 
    *
FROM customers 
WHERE street == ""; -- IS NULL (Outros SQLs)

-- IS NOT NULL
SELECT 
    *
FROM customers 
WHERE street != ""; -- IS NOT NULL (Outros SLQs)

SELECT * FROM customers;

-- IS TRUE
SELECT
    *
FROM customers WHERE street IS TRUE;

-- IS FALSE
SELECT
    *
FROM customers WHERE street IS FALSE;
