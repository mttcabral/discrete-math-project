#include <stdlib.h>
#include <stdio.h>

void triangularSpiral();

int main()
{
    triangularSpiral();

    return 0;
}

void triangularSpiral()
{
    // userInput is expected to be the n-point in the triangular spiral
    int userInput = 0;
    scanf("%d", &userInput);

    int xCoordinate = 0, yCoordinate = 0;
    int scalarD = 1, scalarE = 1, scalarF = 2;
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
            yCoordinate--;
            scalarF--;
        }
        else
        {
            spiralCycle++;
            scalarD = 1 + (4 * (spiralCycle - 1));
            scalarE = 1 + (2 * (spiralCycle - 1));
            scalarF = 2 + (2 * (spiralCycle - 1));

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
                yCoordinate--;
                scalarF--;
            }
        }
    }

    printf("(%d,%d)\n", xCoordinate, yCoordinate);
}