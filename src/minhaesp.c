#include <stdlib.h>
#include <stdio.h>

void mySpiral();

int main()
{
    mySpiral();

    return 0;
}

void mySpiral()
{
    // userInput is expected to be the n-point in the triangular spiral
    int userInput = 0;
    scanf("%d", &userInput);

    int xCoordinate = 0, yCoordinate = 0;
    int scalarD = 2, scalarE = 1, scalarF = 2, scalarG = 1, scalarH = 2, scalarL = 1;
    int spiralCycle = 1;

    for (int i = 0; i < userInput; i++)
    {
        if (scalarD != 0)
        {
            xCoordinate++;
            scalarD--;
        }
        else if (scalarE != 0)
        {
            xCoordinate--;
            yCoordinate++;
            scalarE--;
        }
        else if (scalarF != 0)
        {
            xCoordinate--;
            scalarF--;
        }
        else if (scalarG != 0)
        {
            xCoordinate--;
            yCoordinate--;
            scalarG--;
        }
        else if (scalarH != 0)
        {
            xCoordinate++;
            yCoordinate--;
            scalarH--;
        }
        else if (scalarL != 0)
        {
            xCoordinate++;
            yCoordinate++;
            scalarL--;
        }
        else
        {
            spiralCycle++;
            scalarD = 2 + (1 * (spiralCycle - 1));
            scalarE = 1 + (2 * (spiralCycle - 1));
            scalarF = 2 + (1 * (spiralCycle - 1));
            scalarG = 1 + (1 * (spiralCycle - 1));
            scalarH = 2 + (2 * (spiralCycle - 1));
            scalarL = 1 + (1 * (spiralCycle - 1));

            if (scalarD != 0)
            {
                xCoordinate++;
                scalarD--;
            }
            else if (scalarE != 0)
            {
                xCoordinate--;
                yCoordinate++;
                scalarE--;
            }
            else if (scalarF != 0)
            {
                xCoordinate--;
                scalarF--;
            }
            else if (scalarG != 0)
            {
                xCoordinate--;
                yCoordinate--;
                scalarG--;
            }
            else if (scalarH != 0)
            {
                xCoordinate++;
                yCoordinate--;
                scalarH--;
            }
            else if (scalarL != 0)
            {
                xCoordinate++;
                yCoordinate++;
                scalarL--;
            }
        }
    }

    printf("(%d,%d)\n", xCoordinate, yCoordinate);
}
