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
};


int main ()
{

    menu();

    return 0;
}