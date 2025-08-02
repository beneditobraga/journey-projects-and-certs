#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> // Only linux or MacOS | sleep()
// #include <windows.h> For Windows | Sleep()
#include <time.h>

typedef struct 
{
    int code;
    char name[50];
    char email[50];
    char cpf[20];
    char dateBirth[20];
    char dateRegistration[20];
}Client;

typedef struct 
{
    int numero;
    Client client;
    float balance;
    float limit;
    float totalBalance; // Balance + Limit
}Account;

void menu();
void infoClient(Client Client);
void infoAccount(Account account);
void createAccount();
void makeWithdraw();
void makeDeposit();
void makeTransfer();
void listAccounts();
float updateBalance(Account account);
Account searchByNumber(int number);
void withdraw(Account account, float value);
void deposit(Account account, float value);
void transfer(Account sourceAccount, Account destinationAccount, float value);

static Account accounts[50];
static int counterAccounts = 0;
static int counterClients = 0;

int main()
{

    menu();

    return 0;
}

void menu()
{

}

void infoClient(Client client)
{

}

void infoAccount(Account account)
{

}

void createAccount()
{

}

float updateBalance(Account account)
{

}

Account searchByNumber(int number)
{

}

void withdraw(Account account, float value)
{

}

void deposit(Account account, float value)
{

}

void transfer(Account sourceAccount, Account destinationAccount, float value)
{

}

void makeWithdraw()
{

}

void makeDeposit()
{

}

void makeTransfer()
{

}
