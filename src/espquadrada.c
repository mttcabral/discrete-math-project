#include <stdlib.h>
#include <stdio.h>

void squareSpiral();

int main()
{
    squareSpiral();

    return 0;
}

void squareSpiral()
{
    // userInput is expected to be the n-point in the square spiral
    int userInput = 0;
    scanf("%d", &userInput);

    int xCoordinate = 0, yCoordinate = 0;
    int scalarD = 1, scalarE = 1, scalarF = 2, scalarG = 2;
    int spiralCycle = 1;

    for (int i = 0; i < userInput; i++)
    {
        if (scalarD != 0)
        {
            yCoordinate++;
            scalarD--;
        }
        else if (scalarE != 0)
        {
            xCoordinate--;
            scalarE--;
        }
        else if (scalarF != 0)
        {
            yCoordinate--;
            scalarF--;
        }
        else if (scalarG != 0)
        {
            xCoordinate++;
            scalarG--;
        }
        else
        {
            spiralCycle++;
            scalarD = 1 + (2 * (spiralCycle - 1));
            scalarE = 1 + (2 * (spiralCycle - 1));
            scalarF = 2 + (2 * (spiralCycle - 1));
            scalarG = 2 + (2 * (spiralCycle - 1));

            if (scalarD != 0)
            {
                yCoordinate++;
                scalarD--;
            }
            else if (scalarE != 0)
            {
                xCoordinate--;
                scalarE--;
            }
            else if (scalarF != 0)
            {
                yCoordinate--;
                scalarF--;
            }
            else if (scalarG != 0)
            {
                xCoordinate++;
                scalarG--;
            }
        }
    }

    printf("(%d,%d)\n", xCoordinate, yCoordinate);
}