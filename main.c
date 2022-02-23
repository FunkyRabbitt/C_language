#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    FILE *sushant;
    char name[20];
    printf("Enter your name: ");

    sushant = fopen("sushant.txt", "w");

    if (sushant == NULL)
    {
        printf("Unable to open the file.");
    }
    else
    {
        gets(name);
        fputs(name,sushant);
    }

    return 0;
}