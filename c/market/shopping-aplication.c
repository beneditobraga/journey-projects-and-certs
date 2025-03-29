// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // For Linux or MacOS
// #include <windows.h> For Windows

// Market Data Structure
typedef struct 
{
    int code;
    char name[30];
    float price;
} Product;

typedef struct
{
    Product product;
    int amount;
} Cart;


// Functions
void infoProduct(Product prod);
void menu();
void registerProduct();
void listProduct();
void showCart();
Product takeProductPerCode(int code);
int * haveInCart(int code);
void checkout();

// Static Constants
static int counterProduct = 0;
static int counterCart = 0;
static Cart cart[50];
static Product products[50];

// Function Main
int main()
{
    menu();
    return 0;
}

// Implementations Functions
void menu()
{

}

void registerProduct()
{

}

void listProduct()
{

}

void showCart()
{

}

Product takeProductPerCode(int code)
{

}

int * haveInCart(int code)
{

}

void checkout()
{

}
