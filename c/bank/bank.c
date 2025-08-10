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
    Client Client;

    // The char will always end with "/0".    
    char day[3];
    char month[3];
    char year[5];
    char date_register[20];

    time_t t = time(NULL);
    struct  tm tm = *localtime(&t);
    
    // Day
    if(tm.tm_mday < 10)
    {
        sprintf(day, "0%d", tm.tm_mday);
    }
    else
    {
        sprintf(day, "%d", tm.tm_mday);
    }

    // Month
    if((tm.tm_mon + 1) < 10)
    {
        sprintf(month, "%d", tm.tm_mon + 1);
    }
    else
    {
        sprintf(month, "%d", tm.tm_mon + 1);
    }

    // Year
    sprintf(year, "%d", tm.tm_year + 1900);

    // Brazilian date format.
    strcpy(date_register, "");
    strcat(date_register, day);
    strcat(date_register, "/");
    strcat(date_register, month);
    strcat(date_register, "/");
    strcat(date_register, year);
    strcat(date_register, "\0");
    strcpy(Client.dateRegistration, date_register);

    // Client Creation
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
    if(value > 0 && account.totalBalance >= 0)
    {
        for(int i = 0; i < counterAccounts; i++)
        {
            if(accounts[i].number == account.number)
            {
                if(accounts[i].balance >= value)
                {
                    accounts[i].balance = accounts[i].balance - value;
                    accounts[i].totalBalance = updateBalance(accounts[i]);
                    printf("\nWithdrawal successful!\n");
                }
                else
                {
                    float remainder = accounts[i].balance - value;
                    accounts[i].limit = accounts[i].limit - remainder;
                    accounts[i].balance = 0.0;
                    accounts[i].totalBalance = updateBalance(accounts[i]);
                    printf("\nWithdrawal successful!\n");
                }
            }
        }
    }
}

void deposit(Account account, float value)
{
    if(value > 0)
    {
        for(int i = 0; i < counterAccounts; i++)
        {
            if(accounts[i].number == account.number)
            {
                accounts[i].balance = accounts[i].balance + value;
                accounts[i].totalBalance = updateBalance(accounts[i]);
                printf("\nDeposit made successfully!\n");
            }
        }
    }
    else
    {
        printf("\nError making deposit, please try again.\n");
    }
}

void transfer(Account sourceAccount, Account destinationAccount, float value)
{
    // sc = Source Account
    // cd = Destination Account

    if(value > 0 && sourceAccount.totalBalance >= value) 
    {
        for(int sc = 0; sc < counterAccounts; sc++)
        {
            if(accounts[sc].number == sourceAccount.number)
            {
                for(int dc = 0; dc < counterAccounts; dc++)
                {
                    if(accounts[dc].number == destinationAccount.number)
                    {
                        if(accounts[sc].balance >= value)
                        {
                            accounts[sc].balance = accounts[sc].balance - value;
                            accounts[dc].balance = accounts[dc].balance + value;
                            accounts[sc].totalBalance = updateBalance(accounts[sc]);
                            accounts[dc].totalBalance = updateBalance(accounts[dc]);
                            printf("\nTransfer successful!\n");
                        }
                        else
                        {
                            float remainder = accounts[sc].balance - value;
                            accounts[sc].limit = accounts[sc].limit + remainder;
                            accounts[sc].balance = 0.0;
                            accounts[dc].balance = accounts[dc].balance + value;
                            accounts[sc].totalBalance = updateBalance(accounts[sc]);
                            accounts[sc].totalBalance = updateBalance(accounts[dc]);
                            printf("\nTransfer successful!\n");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("\nTransfer failed, please try again.\n");
    }
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
