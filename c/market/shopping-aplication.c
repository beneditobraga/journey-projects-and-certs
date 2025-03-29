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
void infoProduct(Product prod)
{
    printf("\nCode: %d\nName: %s\nPrice: %.2f\n", prod.code, strtok(prod.name, "\n"), prod.price);
}

void menu()
{
    printf("\n=========================================\n");
    printf("\n              Welcome!                   \n");
    printf("\n=========================================\n");
    printf("\n             Geek Shop                   \n");
    printf("\n=========================================\n\n");

    printf("Select an option:\n\n");
    printf(" - 1 \n");
    printf(" - 2 \n");
    printf(" - 3 \n");
    printf(" - 4 \n");
    printf(" - 5 \n");
    printf(" - 6 \n");

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
