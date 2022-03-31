// -------Sorting three number in ascending order-----
#include <stdio.h>

void Check(int, int, int);

int main()
{
    int number1, number2, number3;

    printf("Enter the firsr number : ");
    scanf("%d", &number1);
    printf("Enter the second number : ");
    scanf("%d", &number2);
    printf("Enter the third number : ");
    scanf("%d", &number3);

    Check(number1, number2, number3);

    return 0;
}
void Check(int number1, int number2, int number3)
{
    if (number1 < number2)
    {
        if (number1 < number3)
        {
            if (number2 < number3)
            {
                printf("%d\n%d\n%d", number1, number2, number3);
            }
            else
            {
                printf("%d\n%d\n%d", number1, number3, number2);
            }
        }
        else
        {
            if (number3 < number2)
            {
                printf("%d\n%d\n%d", number3, number1, number2);
            }
            else
            {
                printf("%d\n%d\n%d", number2, number1, number3);
            }
        }
    }
    else
    {
        if (number2 < number3)
        {
            if (number1 < number3)
            {
                printf("%d\n%d\n%d", number2, number1, number3);
            }
            else
            {
                printf("%d\n%d\n%d", number2, number3, number1);
            }
        }
        else
        {
            if (number3 < number1)
            {
                printf("%d\n%d\n%d", number3, number2, number1);
            }
            else
            {
                printf("%d\n%d\n%d", number1, number2, number3);
            }
        }
    }
}