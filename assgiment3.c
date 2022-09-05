

// start date 4,9,2022
// end data 5,9,2022
// This project is a simple project but I try my best.
// First of all,I have no idea for project that why my project start date is late
// I made a simple project from your lesson,sir.
// But when I wrote this project, I get some more idea for project but I already reached deadline day.

#include <stdio.h>

int x = 1, y = 1, z = 1, decision, stOrMo, result;

int nData, position, i, newElement;

int changeNum, choosePosition;

int *ptr;

int stopOrMove();

int main()
{

    printf("Welcome from my program! \n");
    printf("You need to enter number of array : \n");
    scanf("%d", &nData);

    int array[nData];

    printf("Enter %d element in array:\n", nData);
    for (i = 0; i < nData; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Your array elements are :\n");
    for (i = 0; i < nData; i++)
    {
        printf("%d", array[i]);
    }

    while (x == 1)
    {
        printf("\nWhat did you want to do? \n");
        printf("If you want to delete element from array enter => '1' \n");
        printf("If you want to add element in array enter => '2' \n");
        printf("If you want to change some element value => '3' \n");
        scanf("%d", &decision);
        switch (decision)
        {

        // deleting element
        case 1:
            printf("You want to delete element from array \n");
            printf("You array elements are\n");
            for (i = 0; i < nData; i++)
            {
                printf("%d position have %d \n", i, array[i]);
            }

            printf("Please enter a position of element you want to delete :\n");
            scanf("%d", &position);

            i = position;
            while (i <= nData - 1)
            {
                array[i] = array[i + 1];
                i++;
            }

            printf("After deleting array \n");
            for (i = 0; i < nData - 1; i++)
            {
                printf("%d position have %d \n", i, array[i]);
            }

            result = stopOrMove();
            x = result;
            break;

        // adding element value
        case 2:

            printf("You want to add element in array \n");
            printf("Array have %d elements\n", nData);
            for (i = 0; i < nData; i++)
            {
                printf("%d position have %d \n", i, array[i]);
            }

            printf("Please enter a position of element you want to add :\n");
            scanf("%d", &position);

            printf("Please enter a element you want to add :\n");
            scanf("%d", &newElement);

            i = nData - 1;
            while (position <= i)
            {
                array[i + 1] = array[i];
                i--;
            }
            array[position] = newElement;
            printf("After adding array \n");
            for (i = 0; i < nData + 1; i++)
            {
                printf("%d \n", array[i]);
            }
            result = stopOrMove();
            x = result;
            break;

        // changing element
        case 3:

            printf("User want to change array elements \n");
            printf("You array elements are \n");
            for (i = 0; i < nData; i++)
            {
                printf("%d position have %d \n", i, array[i]);
            }

            while (z == 1)
            {

                printf("Choose you element position you want to change \n");
                scanf("%d", &position);

                if (position <= nData && position > 0)
                {
                    printf("Enter you element value you want to change \n");
                    scanf("%d", &changeNum);

                    printf("%d", position);
                    ptr = &array[position];

                    *ptr = changeNum;

                    z = 2;
                }
                else if (position < 0)
                {
                    printf("You position number is less than array num \n");
                }
                else
                {
                    printf("You position number is greater than array num \n");
                }
            }

            for (i = 0; i < nData; i++)
            {
                printf("\n%d position have %d ", i, array[i]);
            }

            result = stopOrMove();
            x = result;
            break;

        default:
            printf("Please follow the rule,sir! \n");
            break;
        }
        printf("Please try other feature sir \n");
        printf("If you test only one feature the program is meaningless ");
    }

    return 0;
}

int stopOrMove()
{
    int stopOrMoveresult;
    printf("\nYou want to tryagain program enter => '1'\n");
    printf("You want to stop program enter => '2'\n");
    scanf("%d", &stOrMo);
    if (stOrMo == 1)
    {
        stopOrMoveresult = 1;
    }
    else if (stOrMo == 2)
    {
        stopOrMoveresult = 2;
    }
    else
    {
        printf("Please follow the rule \n");
        stopOrMoveresult = 1;
    }

    return stopOrMoveresult;
}