// --uses of fputs function in c language----
// -- write the user inputed value into the file---

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    FILE *my;

    char name[100];
    my = fopen("sushant.txt","a");

    if (my == NULL)
    {
        printf("unable to open the file");
    }else{
        gets(name);
        fputs(name,my);  // -- write the whole input value in the file--
        printf("Data written successfully");
        fclose(my);
    }
    
    return 0;    
}
