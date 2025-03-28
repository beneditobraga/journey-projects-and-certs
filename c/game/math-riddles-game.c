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
    calculate calc;
    int dificult;

    printf("\nEnter the difficulty level (1, 2, 3, 4):");
    scanf("%d", &dificult);
    calc.difficulty = dificult;

    // Random integer value between 0 and 2
    // 0 = Sum | 1 = Subtraction | 2 = Multiplication
    calc.operation = rand() % 3;

    if(calc.difficulty == 1)
    {
        // Level 01
        calc.value1 = rand() % 11; // 0 to 10
        calc.value2 = rand() % 11; // 0 to 10
    }else if(calc.difficulty == 2)
    {
        // Level 02
        calc.value1 = rand() % 101; // 0 to 100
        calc.value2 = rand() % 101; // 0 to 100
    }
    else if(calc.difficulty == 3)
    {
        // Level 03
        calc.value1 = rand() % 1001; // 0 to 1000
        calc.value2 = rand() % 1001; // 0 to 1000
    }
    else if(calc.difficulty == 4)
    {
        // Level 04
        calc.value1 = rand() % 10001; // 0 to 10000
        calc.value2 = rand() % 10001; // 0 to 10000
    } else
    {
        // Very difficult
        calc.value1 = rand() % 100001; // 0 to 100000
        calc.value2 = rand() % 100001; // 0 to 100000
    }

    int response;
    printf("\nReport the result for the operation: \n");

    // Sum
    if(calc.operation == 0)
    {
        printf("%d + %d\n", calc.value1, calc.value2);
        scanf("%d", &response);

        if (sum(response, calc))
        {
            points += 1;
            printf("\nCurrent Score: %d", points);
        }
    }
    // Subtracts
    else if(calc.operation == 1)
    {
        printf("%d - %d\n", calc.value1, calc.value2);
        scanf("%d", &response);

        if (subtracts(response, calc))
        {
            points += 1;
            printf("\nCurrent Score: %d", points);
        }
    }
    // Multiply
    else if(calc.operation == 2)
    {
        printf("%d * %d\n", calc.value1, calc.value2);
        scanf("%d", &response);

        if(multiply(response, calc))
        {
            points += 1;
            printf("\nCurrent Score: %d", points);
        }
    }
    // Unknown
    else 
    {
        printf("\nThe operation %d is not recognized.\n", calc.operation);
    }

    // Start over
    printf("\nDo you want to continue playing? | 1 - Yes | 2 - No |\n");
    int continuegame;
    if(continuegame)
    {
        play();
    }
    else 
    {
        printf("\nFinal Score: %d\n", points);
        printf("\nAté a próxima!!!\n\n");
        exit(0);
    }
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
    int result = calc.value1 - calc.value2;
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

    printf("\n%d - %d = %d\n", calc.value1, calc.value2, calc.result);

    return right;
}

int multiply (int response, calculate calc)
{
    int result = calc.value1 * calc.value2;
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

    printf("\n%d * %d = %d\n", calc.value1, calc.value2, calc.result);

    return right;
}