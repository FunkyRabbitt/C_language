// ------------Addition of two smaller number-----

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
    int sum;
    if (number1 > number2)
    {
        if (number1 > number3)
        {
            sum = number2 + number3;
            printf("The sum of two smaller number %d and %d is %d.", number2, number3, sum);
        }
        else
        {
            sum = number1 + number2;
            printf("The sum of two smaller number %d and %d is %d.", number1, number2, sum);
        }
    }
    else
    {
        if (number2 > number3)
        {
            sum = number1 + number3;
            printf("The sum of two smaller number %d and %d is %d.", number1, number3, sum);
        }
        else
        {
            sum = number2 + number1;
            printf("The sum of two smaller number %d and %d is %d.", number1, number2, sum);
        }
    }
}