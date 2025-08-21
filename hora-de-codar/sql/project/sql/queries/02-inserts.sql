-- INSERTS

-- Consta aqui partes dos requisitos de acordo com os scripts.

/*

    Além disso, João precisa conseguir gerenciar estes pedidos. E também mudar o status de cada um:

        - Em produção
        - Entrega
        - Concluído

*/

INSERT INTO status (tipo) VALUES ("Em Produção");
INSERT INTO status (tipo) VALUES ("Em Entrega");
INSERT INTO status (tipo) VALUES ("Concluído");

/*

    João também passou a relação de massas, bordas e sabores que utiliza:

    Massas:
    - Massa comum
    - Massa Integral
    - Massa temperada

    Bordas:
    - Cheddar
    - Catupiry

    Sabores:
    - 4 Queijos
    - Frango com Catupiry
    - Calabresa
    - Lombinho
    - Filé com Cheddar
    - Portuguesa
    - Marguerita

*/

INSERT INTO massas (tipo) VALUES ("Massa Comum");
INSERT INTO massas (tipo) VALUES ("Massa Integral");
INSERT INTO massas (tipo) VALUES ("Massa Temperada");

INSERT INTO bordas(tipo) VALUES ("Cheddar");
INSERT INTO bordas(tipo) VALUES ("Catupiry");

INSERT INTO sabores (nome) VALUES ("4 Queijos");
INSERT INTO sabores (nome) VALUES ("Frango com Catupiry");
INSERT INTO sabores (nome) VALUES ("Calabresa");
INSERT INTO sabores (nome) VALUES ("Lombinho");
INSERT INTO sabores (nome) VALUES ("Filé com Cheddar");
INSERT INTO sabores (nome) VALUES ("Portuguesa");
INSERT INTO sabores (nome) VALUES ("Marguerita");
