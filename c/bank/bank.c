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
    int number;
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
    int option = 0;

    printf("\n======================\n");
    printf("\n       git Bank         ");
    printf("\n\n======================\n\n");

    printf("OPTIONS\n\n");
    printf("  - 1 Create Account\n");
    printf("  - 2 Withdraw\n");
    printf("  - 3 Deposit\n");
    printf("  - 4 Transfer\n");
    printf("  - 5 Accounts\n");
    printf("  - 6 Exit\n\n");

    printf("Choice: ");
    scanf("%d", &option);
    getchar();

    switch (option)
    {
        case 1:
            createAccount();
            break;

        case 2:
            makeWithdraw();
            break;

        case 3:
            makeDeposit();
            break;

        case 4:
            makeTransfer();
            break;

        case 5:
            listAccounts();
            break;

        case 6:
            printf("\nSee you next time!\n\n");
            sleep(2);
            exit(0);
    
        default:
            printf("");
            sleep(2);
            menu();
            break;
    }
}

void infoClient(Client client)
{
    printf("Code: %d\n", client.code);
    printf("Name: %s\n", strtok());
    printf("Date of Birth: %s\n", strtok(client.dateBirth));
    printf("Register: %s\n", client.dateRegistration);

}
void infoAccount(Account account)
{
    printf("Account: %d\n", account.number);
    printf("Client: %s\n", strtok(accounts->client.name));
    printf("Date of Birth: %s\n", strtok(accounts->client.dateBirth));
    printf("Register: %s\n", strtok(accounts->client.dateRegistration));
    printf("Total Balance: %.2f\n", accounts->totalBalance);
}

void createAccount()
{

}

float updateBalance(Account account)
{
    return account.balance + account.limit;
}

Account searchByNumber(int number)
{
    Account c;

    if(counterAccounts > 0)
    {
        for(int i = 0; i < counterAccounts; i++)
        {
            if(accounts[i].number == number)
            {
                c = accounts[i];
            }
        }
    }

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
