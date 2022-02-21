// -----fprintf------
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    FILE *sushant;
    char name[20];
    int age;

    printf("Enter your name and age: ");
    scanf("%s\t%d",name,&age);

    sushant = fopen("sushant.txt", "w");

    if (sushant == NULL)
    {
        printf("Unable to open the file");
    }
    else
    {
        fprintf(sushant, "Name : %s\nAge: %d", name, age);
        fclose(sushant);
    }
    return 0;
}