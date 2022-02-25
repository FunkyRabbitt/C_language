// --Structure pointer and arrow operator---(using the structure pointer into the printf function) or arrow operator-
#include <stdio.h>

int main()
{

    struct student //-Defining the struct- like its prototype-
    {
        char Name[30];
        char faculty[20];
        int Age;
    };

    struct student sushant = {"sushant khadka", "BE-Software", 20};

    struct student *my_name;

    my_name = &sushant;

    // -Both method are right but second one is right to use into the program-
    (*my_name).Age = 200;
    my_name->Age = 300; //--structure arrow operator in C language-

    printf("%s", my_name->Name); //--All the method of printing the struct pointer is Right in their own way-
    printf("%d", (*my_name).Age);
    printf("%s", (*my_name).faculty);

    return 0;
}