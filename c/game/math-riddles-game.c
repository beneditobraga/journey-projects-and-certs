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

    if(calc.operation == 0) // 0 = Sum
    {
        sprintf(op, "Sum");
    } else if (calc.operation == 1) // 1 = Subtraction
    {
        sprintf(op, "Subtraction");
    } else if (calc.operation == 2) // 2 = Multiplication
    {
        sprintf(op, "Multiplication");
    } else
    {
        sprintf(op, "Unknown Operation");
    }

    printf("\nValue 1: %d \nValue 2: %d \nDifficulty: %d \nOperation: %s \n\n",
        calc.value1, calc.value2, calc.difficulty, op);
}

int sum (int response, calculate calc)
{
    int result = calc.value1 + calc.value2;
    calc.result = result;

    int right = 0; // 0 = wrong, 1 = right

    if(response == calc.result)
    {
        printf("\nCorrect answer!\n");
        right = 1;
    } else
    {
        printf("\nWrong answer!\n");
    }

    printf("\n%d + %d = %d\n", calc.value1, calc.value2, calc.result);

    return right;
}

int subtracts (int response, calculate calc)
{

}

int multiply (int response, calculate calc)
{

}