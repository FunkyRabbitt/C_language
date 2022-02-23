//--------Adding the data into the struct manually with the help of th user----
#include<stdio.h>

int main(){

    struct student  
    {
        char name[20];
        int age;
        int class;
    };
    
    struct student sushant = {"Sushant khadka",20,13}; 
    struct student Alina = {0}, Ritika = {0}; // store the default value as zero into them

    Alina.age = 12; //--Adding the value into the related struct---
    Ritika.age = 13;

    printf("%d",Alina.age);
    printf("%d",Ritika.age);

    return 0;
}