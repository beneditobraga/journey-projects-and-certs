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
void buyProduct();
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
    printf(" - 1 Register\n");
    printf(" - 2 List\n");
    printf(" - 3 Buy\n");
    printf(" - 4 View\n");
    printf(" - 5 Checkout\n");
    printf(" - 6 Exit\n");

    int option;
    printf("\n     Optin: ");
    scanf("%d", &option);
    getchar();

    switch (option)
    {
    case 1:
        registerProduct();
        break;
    case 2:
        listProduct();
        break;
    case 3:
        buyProduct();
        break;
    case 4:
        registerProduct();
        break;
    case 5:
        registerProduct();
        break;
    case 6:
        registerProduct();
        break;
    
    default:
        break;
    }

}

void registerProduct()
{
    
}

void listProduct()
{

}

void buyProduct()
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
