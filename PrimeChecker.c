#include <stdio.h>

void PrimeCheck(int);

int main()
{
    int n;
    scanf("%d", &n);
    PrimeCheck(n);
    return 0;
}
void PrimeCheck(int n)
{
    int C = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            C++;
        }
    }
    if (C > 0)
    {
        printf("Number is Composition.");
    }
    else
    {
        printf("Number is prime.");
    }
}
