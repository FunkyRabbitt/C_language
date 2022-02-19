// ---------Conditional compilation--------
// ----Check the condition without running the program--
// -----Live checking of the code if it is true or not during the time of the cooding---
#include<stdio.h>
#include<conio.h>

#define MARKS 56  //- Defining the preprocessor at the beggining of the program-

int main(){

#if MARKS >=89  //- Highlight the correct line if the condition get satisfied---
    printf("hai");
#else
    printf("no");
#endif
    
    return 0;
}