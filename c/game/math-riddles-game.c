#include <stdio.h>
#include <stdlib.h>

// Game Data Structure
typedef struct 
{
   //  
   int difficulty;
   int value1;
   int value2;
   int operation;
   int result;

} calculate;

// Functions
void play();
void showInfo(calculate calc);

// Player Points Counter
int points = 0;

int main ()
{
    // Random Initialization (Once)
    srand(time(NULL));
    
    jogar();

    return 0;
}

// Implementations Functions
void play()
{

}

void showInfo(calculate calc)
{
    char op[25];

    if(calc.operation == 0)
    {
        
    }
}

int sum (int response, calculate calc)
{

}

int subtracts (int response, calculate calc)
{

}

int multiply (int response, calculate calc)
{

}