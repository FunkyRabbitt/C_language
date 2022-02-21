// // ----------------Starting the first program in c-----------
// // ------Program to print the hellow world in c language------
// #include<stdio.h>
// // ---------- main is the starting part of the program ---------
// int main(){    
//     printf("hellow world\n");  // PRINTF is used for printing something in the c language-----
//     printf("This is the second line");
//     return 0; // RETURN is used to hold the value of the frogram for sometimes.
// }

// // ------------Calculate the sum of two number---------------
// #include <stdio.h>
// int main(){
//     int a,b,sum;  //-- giving the data type-----

//     printf("Enter the first number: ");
//     scanf("%d",&a);   //--Taking the input from the user--

//     printf("\nEnter the second number: ");
//     scanf("%d",&b);

//     sum = a + b;  // ---Arthmatic work is doing here----
//     printf("The sum of the two number is %d",sum);

//     return 0;
// }

// // Subtraction of two number
// #include<stdio.h>
// int main(){
//     int a,b,sub; // defining the data type before taking the input from the user
//     printf("Enter the first number: ");
//     scanf("%d",&a);

//     printf("Enter the second number: ");
//     scanf("%d",&b);

//     sub = a - b; // Arthimatic work is done here
//     printf("The subtraction of two number is: %d",sub);

//     return 0;
// }

// // ------Flow of C Program----
// /*
// 1. Preprocessing: In this process simple the removing of the commenting is done or more simple work is done in this step.
// 2. Complilation: In this process the source code of the program is converted into the Object code after the prooer checking of the compiler if any structural error or not in the program anf whem it is error free it is converted sucessfully.
// 3. Assembly: An Assembly is a basic building block of . Net Framework applications. It is basically a compiled code that can be executed by the CLR. An assembly is a collection of types and resources that are built to work together and form a logical unit of functionality. 
// 4. Linking: In this process all the small piece of program is linked with one another to form a single program.
// 5. Loading: Program is loading by the help of the loader program of the operating system.*/

// // Data type in C 
// // 1. Basic data type : int,char,float,double
// // 2. Derived Data type: array,pointer, structure, union 
// // 3. Enumeration data type : enum 
// // 4. Void Data Type: void 

// // Working with if else condition
// #include<stdio.h>
// int main(){
//     int age;

//     printf("Enter your age: ");
//     scanf("%d",&age);
// // Checking the condition here
//     if (age<10) // if the condition meet true it will goto line no. 68 otherwise goto line no. 69
//     {
//         printf("You are not eligible to watch porn: ");
//     }else if ((age>10)&&(age<=18))
//     {
//         printf("You are eligible to watch the porn with only using vpn");
//     }else
//     {
//         printf("You have full authurity to watch the porn");
//     }
    
//     return 0;
// }

// // Determine the number is odd or even 
// #include<stdio.h>
// int main(){
//     int number;

//     printf("Enter the number: ");
//     scanf("%d",&number);

//     if (number%2==0)  // Check the reminder by dividing the number
//     {
//         printf("The number %d is Even",number);
//     }else
//     {
//             printf("The number %d is Odd",number);
//     }
//     return 0;
// }

// // Determine the number is prime,composition,odd, even, zero,positive or negative
// #include<stdio.h>
// int main(){
//     int number;

// // taking the input from the user
//     printf("Enter the number: ");
//     scanf("%d",&number);
    
//     //checking if the number is equal to zero
//     if (number==0)
//     {
//         printf("The number is equal to zero:");
//         //checking the number is positive or negative
//         // for negative number
//     }else if (number<0)
//     {
//         if ((number==-1)||(number==-3)) // check if the number is equal to 1 or 3 
//         {
//             printf("Negative,odd and not prime nor compositon");
//         }else if (number==-2)  // check if the number is equal to 2
//         {
//             printf("negative,even,and not prime nor composition");
//         }else
//         {
//             if (number%2==0) // checking if the number is even or odd
//             {
//                 // if the number is positive
//                 printf("negative,even and composition");
//             }else  // if the number is odd
//             {
//                 if (number%3==0) // check the odd number for the prime or composition
//                 {
//                     printf("Negative,odd,composition");
//                 }else
//                 {
//                     printf("negative and not prime nor composition");
//                 }
//             } 
//         } 
//         // for positive number
//     }else
//     {
//         if ((number==1)||(number==3))
//         {
//             printf("Positive,odd and not prime nor compositon");
//         }else if (number==-2)
//         {
//             printf("Positive,even,and not prime nor composition");
//         }else
//         {
//             if (number%2==0) // even
//             {
//                 printf("Positive,even and composition");
//             }else
//             {
//                 if (number%3==0)
//                 {
//                     printf("Positive,Odd and Compositon");
//                 }else
//                 {
//                     printf("Positive and Prime");
//                 }
//             }
//         }
//     }
//     return 0;
// }
// // Do while loop in C 
// #include<stdio.h>
// int main(){
//     int i=1;
//     do
//     {
//         printf("%d",i);
//         i = i+1;
//     } while (i<=10);
    
// }

// // For loop in C 
// #include<stdio.h>
// int main(){
//     int i =1;
//     for(;i<=11;){
//         printf("%d",i);
//         i = i+1;
//     }
//     return 0;
// }

// //   Multiplication table pf the user given number
// #include <stdio.h>
// int main()
// {
//     int number;
//     int loop = 1;

//     printf("Enter the number for the multiplication: ");
//     scanf("%d", &number);
//     printf("Multiplication table of %d is given below:\n\n ", number);
//     for (; loop <= 10; )
//     {

//         printf("%d x %d = %d\n",number,loop, number * loop);
//         loop= loop +1;
//     }
    
// }

// // Whiel loop in C 
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while (i<=10)
//     {
//         printf("Hellow Mother Father: \n");
//         i=i+1;
//     }
//     return 0;
// }

// // Break and continue in C /
// //   First starting from the break statement
// #include<stdio.h>
// int main(){
//     int i=0;
//     int age;
//     printf("Enter the Age: ");
//     scanf("%d",&age);
//     for (; i <=20;)
//     {
//         if (age==10)
//         {
//             printf("wow its a miracle: ");
//             break;
//         }
//         printf("The number is: %d",i);
//         i=i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int age;
//     scanf("%d", &age);
//     for (; i <= 20;)
//     {
//         printf("%d\n",i);
//         i = i + 1;
//         if (i == 10)
//         {
//             printf("wow its a miracle: ");
//             continue;
//         }else
//             continue;
//     }
//     return 0;
// }
// // #working with switch statement in c language
// #include<stdio.h>
// int main(){
//     int number;

//     printf("Enter the number: ");
//     scanf("%d",&number);

//     switch (number)
//     {
//     case 1:
//         printf("You have enter the number 1");
//         break;
//     case 2:
//         printf("you have enter the number 2");
//         break;
//     default:
//         printf("Your method of entering the number is totally wrong:");
//         break;
//     }
//     return 0;
// }
// //   Range in switch case in C language
// #include <stdio.h>
// int main()
// {
//     int number;

//     printf("Enter the number: ");
//     scanf("%d", &number);

//     switch (number)
//     {
//         // case for the number from 0 to 1000
//         // check the condition from 0 to 1000 in one switch case
//     case 0 ... 1000:
//         printf("The number is lies between 1 to 1000 range of number.");
//         break;

//     case 3000:
//         printf("The number is 3000");
//         break;
//         // if program doesnot meet any of the case it will automatically run the default case
//     default:
//         printf("Your input method doesnot meet our requirenment. ");
//         break;
//     }
//     return 0;
// }
// //  cheack the uppercase of lowercase (character)
// #include <stdio.h>
// int main()
// {
//     char character;

//     printf("Enter the character for checking: ");
//     scanf("%c", &character);

//     switch (character)
//     {
//     case 'A' ... 'Z':
//         printf("The character you have enter is in Uppercase. ");
//         break;
//     case 'a' ... 'z':
//         printf("The character you have enter is in lowercase.");
//         break;
//     default:
//         printf("Please Enter the character only for checking.");
//         break;
//     }
//     return 0;
// }

// // Working with continue in c language
// #include <stdio.h>
// int main()
// {
//     int i = 0, age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     for (; i <= 20;)
//     {
//         printf("%d", i);
//         i = i + 1;
//         if (age > 5)
//         {
//             continue;
//         }
//         printf("hellow world2");
//     }
//     return 0;
// }

// // Goto statement in c language
// #include<stdio.h>
// int main(){
//     int i=0, j=0,age;

//     for (; i <5; i++)
//     {
//         printf("%d",&i);
//         for (; j < 5; j++)
//         {
//             printf("Enter the number: ");
//             scanf("%d",&age);
//             if (age<10)
//             {
//                 goto end;
//             }
//         }
//     }
//     end:
//     return 0;
// }

// // -----goto in c langauage------
// #include<stdio.h>

// int main(){

//     int i = 0;

//     for (; i < 10; i++)
//     {
//         if (i == 5)
//         {
//             goto end;
//         }else{
//             printf("%d\n",i);
//         }
//     }
//     end:
//     return 0;
// }
// // typecasting in C 
// // --typecasting means changing one data type into another
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     float product;

//     printf("Enter the first number: ");
//     scanf("%d",&a);
//     printf("Enter the second number: ");
//     scanf("%d",&b);

//     product =(float)a/b;

//     printf("The final product is: %f",product);

//     return 0;
// }

// // Function in C language
// #include <stdio.h>
// // Defining the function in C language
// int sum(int a, int b)  // taking two argument at first
// {
//     int c;  
//     // calculation part is doing here
//     c = a + b;
//     // Returning the value after the calculation to the main (function) or program
//     return c;
// }
// int main()
// {
//     int a,b,c;
//     printf("Enter the first number: ");
//     scanf("%d", &a);

//     printf("Enter the second number: ");
//     scanf("%d", &b);

//     c = sum(a,b);  // Calling the function here
//     printf("The Sum of two number %d and %d is : %d",a,b,c);

//     return 0;
// }
// // ----Function in C language--
// #include<stdio.h>
// void display();  // writing the prototype for the function
// int main(){
//     display(); //calling the function

//     return 0;
// }
// void display(){  // Defining the function
//     printf("This is Printed by the Function.");
// }

// // Factorial in C
// #include<stdio.h>
// int main()
// {
//     int total=1,number,number1=1;

//     printf("Enter the number for the Factorial: ");
//     scanf("%d",&number);

//     for (; number1 <=number; number1++)
//     {
//         total=total*number1;
        
//     }
//     printf("The factorial of %d is : %d",number,total);
//     return 0;
// }

// // Arrays in C
// #include <stdio.h>
// int main()
// {
//     int marks[] = {23, 56, 34, 56, 67}; // creating the array

//     printf("The element in the zero positioon is : %d\n", marks[0]); // printing the element with their position in the array marks
//     printf("The element in the fourth position is : %d", marks[4]);

//     return 0;
// }

// // Creating the array according the use of the user and printing them according to their position on the array
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int size; // make sure the size of the array
//     int counter = 0;  // i have used counter for looping
//      // taking the size of the array as a input
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int value[size];  // declare the size of the array according to the need of the user

//     for (; counter < size; counter++)
//     {
//         printf("Enter the value: ");
//         scanf("%d", &value[counter]);
//     }
//     // printf("The value of array in zeroth position is: %d",value[cou]);
//     for (counter = 0; counter < size; counter++)
//     {
//         printf("The value at %d position of the array is:%d \n", counter, value[counter]);
//     }
//     return 0;
// }

// // ---Creating and looping in array---
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int word;
//     int size;
//     int counter;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     int marks[size];

//     for (counter = 0; counter < size; counter++)
//     {
//         printf("Enter the value of the array for %d position: ", counter);
//         scanf("%d", &marks[counter]);
//     }
//     printf("\n\n");
//     printf("Enter '1' to see all value and '0' to end the program: ");
//     scanf("%d", &word);
//     switch (word)
//     {
//     case 1:
//         for (counter = 0; counter < size; counter++)
//         {
//             if (counter == 0)
//             {
//                 printf("+------------------------------------------+\n");
//                 printf("| The value of %d position array is: %d      |\n", counter, marks[counter]);
//                 printf("+------------------------------------------+\n");
//             }
//             else
//             {
//                 printf("| The value of %d position array is: %d      |\n", counter, marks[counter]);
//                 printf("+------------------------------------------+\n");
//             }
//         }
//         break;
//     case 0:
//         printf("+------------------------------------------+");
//         printf("\n| Thanks for your valuable time with us.   |\n");
//         printf("+------------------------------------------+");
//         break;
//     default:
//         printf("\nSorry your input method is wrong and the program exit by default.");
//         break;
//     }

//     return 0;
// }

// // ------Calling the function in C language
// #include<stdio.h>
// ///// Creating the prototype for the function
// void maile();
// void bhat();
// void khayako();
// ///main function section start
// int main(){
//     maile();  // calling the maile named function
//     return 0;
// }
// //describing the function
// void maile(){
//     printf("Maile");
//     bhat();  // Calling the down-side function
// }
// void bhat(){
//     printf("Bhat khayako");
//     khayako();
// }
// void khayako(){
//     printf("Hai ta guys");
// }

// // ----Creating the function to calculate add, subtraction, multiplication and division of two number--
// #include <stdio.h>

// int add(int, int);
// int sub(int, int);

// int main()
// {
//     int a, b;
//     add(a, b);
//     sub(a, b);
//     mul(a, b);
//     div(a, b);
//     return 0;
// }

// int add(int x, int y)
// {
//     int sum;
//     printf("Enter the first number: ");
//     scanf("%d", &x);

//     printf("Enter the first number: ");
//     scanf("%d", &y);

//     sum = x + y;
//     printf("The sum of %d and %d is: %d\n", x, y, sum);
// }

// int sub(int x, int y)
// {
//     int sub;
//     printf("Enter the first number: ");
//     scanf("%d", &x);

//     printf("Enter the first number: ");
//     scanf("%d", &y);

//     sub = x - y;
//     printf("The sum of %d and %d is: %d\n", x, y, sub);
// }

// int mul(int x, int y)
// {
//     int mul;
//     printf("Enter the first number: ");
//     scanf("%d", &x);

//     printf("Enter the first number: ");
//     scanf("%d", &y);

//     mul = x * y;
//     printf("The Multiplication of %d and %d is: %d\n", x, y, mul);
// }

// int div(int x, int y)
// {
//     int div;
//     printf("Enter the first number: ");
//     scanf("%d", &x);

//     printf("Enter the first number: ");
//     scanf("%d", &y);

//     div = x / y;
//     printf("The division of %d and %d is: %d\n", x, y, div);
// }
 
//  // Advance add,sub mul and division using global variable
//  #include <stdio.h>
// int result;

// // --- Crating the prototype of the function in the begininning of the program-
// int add(int, int);
// int sub(int, int);
// int mul(int, int);
// int div(int, int);

// int main()
// {
//     int a = 10, b = 20;
//     add(a, b);
//     sub(a, b);
//     mul(a,b);
//     div(a,b);

//     return 0;
// }
// int add(int a, int b)
// {
//     result = a + b;
//     printf("The Addition of two number %d and %d is: %d\n", a, b, result);
// }
// int sub(int a, int b)
// {
//     result = a - b;
//     printf("The Subtraction of two number %d and %d is: %d\n", a, b, result);
// }
// int mul(int a, int b)
// {
//     result = a * b;
//     printf("The Multiplication of two number %d and %d is: %d\n", a, b, result);
// }
// int div(int a, int b)
// {
//     result = a / b;
//     printf("The Division of two number %d and %d is: %d\n", a, b, result);
// }
// // ---Passing thea array to a function----
// #include <stdio.h>

// int display(int marks[], int size);
// int main()
// {
//     int counter; // counter is used for displaying the numer of element from array marks
//     int marks[3] = {23, 45, 56};

//     printf("Enter the number for the position of an element: ");
//     scanf("%d", &counter);

//     display(marks, counter);

//     return 0;
// }
// int display(int marks[], int size)  // Taking array as input and its size
// {
//     int counter;
//     for (counter = 0; counter < size; counter++)
//     {
//         printf("The element of an aray at position %d is %d :\n", counter, marks[counter]);
//     }
// }

// // ------ Variable scope in C---
// // ----- Creating the global variable in the program------
// #include<stdio.h>

// void hellow();

// int my_value = 55;  // crating the global variable for whole the program

// int main(){

//     printf("This %d is from main function: \n",my_value);
//     hellow();
//     return 0;
// }
// void hellow(){
//     printf("This %d is from hellow function: ",my_value);
// }

// // ---Pointer in C---
// // ---- & address of the opertor
// // ---- *  value of the operator

// #include<stdio.h>

// int main(){

//     int a = 10;
//     int *b;

//     b= &a;
//     printf("Actual value of A: %d\n",a);  // Value store in the integer form int the variable
//     printf("Memory Address of A (Directly):%d\n",&a);  // Directly access the memory location in the memory
//     printf("Memory Address of A stored in the next Variable B: %d\n",b);  // access memory address and store in variable
//     return 0;
// }

// // ---Pointer in C---
// // ---- & address of the opertor
// // ---- *  value of the operator

// #include <stdio.h>

// int main()
// {

//     int a = 10;
//     int *b;

//     b = &a;
//     printf("Actual value of A: %d\n", a); // Value store in the integer form int the
//     printf("The value of A is: %d\n", *(&a));
//     printf("Memory Address of A (Directly):%d\n", &a); // Directly access the memory location in the memory

//     printf("Memory Address of A stored in the next Variable B: %d\n", b); // access memory address and store in variable
//     printf("The value pointed by the pointer b is: %d\n", *b);  // pointed value is the value of the main variable
//     printf("The Address of the pointer is: %d", &b);  // Memory Addreee of the pointer

//     return 0;
// }

// // -----Pointer to pointer in C----
// // ---Advance pointer in C---
// #include <stdio.h>

// int main()
// {
//     int x = 20;
//     int *p;
//     int **q;

//     p = &x;
//     q = &p;

//     printf("The value of X is: %d\n", x);
//     printf("Address of X is: %u\n", &x);
//     printf("The value of P is: %u\n", p); // we can write &x instead of p
//     printf("The Address of P is: %u\n", &p);
//     printf("The value pointed by the pointer p is: %d\n", *p);
//     printf("The value of q is: %u\n", q);
//     printf("The Address of q is: %u\n", &q);
//     printf("The value of x by using pointer to q pointer is: %d\n", **q);
//     return 0;
// }

// // -----Pass by value in C---
// #include<stdio.h>

// int display(int, int);
//   // The value of x and y is copied into the variable a and b
//   // There will be four variable into the different memory location 
//   // Makes the four variable making the copy of both the variable
// int main(){
//     int x,y;
//     x = 10;
//     y = 20;

//     printf("The value of X is %d and Y is %d\n",x,y);
//     display(x,y);

//     return 0;
// }

// int display(int a, int b){
//     printf("The value of A is %d and B is %d",a,b);
// }

// // ---Pass by reference in C----
// #include<stdio.h>

// int display(int *, int *);
// int main(){

//     int a = 100;
//     int b = 200;

//     display(&a,&b);
//     return 0;

// }
// int display(int *p, int *q){
//     printf("%d %d",*p,*q);
// }

// // ---- Pre-processor in C---
// #include <stdio.h>
// #include <conio.h>
//  // Defining the pre-processor in C
// #define limit 10;
// #define NAME "Sushant khadka"

// int main()
// {
//     printf(NAME"\n"); // value can be easily accable
//     for (int counter = 0; counter <= limit counter++)  // comma should be avoide during looping 
//     {
//         printf("The number in loop is: %d\n", counter);
//     }

//     return 0;
// }

// // ---------Conditional compilation--------
// // ----Check the condition without running the program--
// // -----Live checking of the code if it is true or not during the time of the cooding---
// #include<stdio.h>
// #include<conio.h>

// #define MARKS 56  //- Defining the preprocessor at the beggining of the program-

// int main(){

// #if MARKS >=89  //- Highlight the correct line if the condition get satisfied---
//     printf("hai");
// #else
//     printf("no");
// #endif
    
//     return 0;
// }

// // --- #ifdef and ifndef in c pre-processor---
// #include<stdio.h>    
// #include<conio.h>

// #define Intel
// #undef Intel

// int main(){
// //   Check if the preprocessor is define of not
// #ifdef Intel
//     printf("Pre-processor is Define:");
// // #ifndef Intel
// //     printf("Not define");
// #endif
// }

// // ==============File Handling in C============
// // -Types of mode of the file
// /*1. "r" = used to read the file. If not present shows the error
// 2. "w" = used to write the file by creating new if exist delete it and create new
// 3. "a" = used to open the file and can be edit it by writing something in it
// 4. "r+" = used to read and write porpose
// 5. "w+" = previous data will be lost and can be read and write in it
// 6. "a+" = can be read and write but the contain will not be lost
// 7. add +b in all the  mode if the file is in binary format */

// #include<stdio.h>
// #include<conio.h>

// int main(){

//     FILE *Fpointer;  //creating the file system in the counter
//     Fpointer = fopen("sushant.txt","w");  // creating and open it in write mode and open it to do some task in it
//     if (Fpointer== NULL)  //check if the file is exist or created or not
//     {
//         printf("unable to open the file"); // file not found message will seen if there is no file
//     }else{
//         printf("File opened successfully");  // open sucessfully message is seen in the console
//         fclose(Fpointer);  // closing the file after opening it *it is very necessary to close the program
//     }
    

//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>

// int main(){

//     FILE *myname;
//     myname = fopen("sushant.pptx","r");

//     if (myname==NULL)
//     {
//         printf("Unable to open the file");
//         myname = fopen("sushant.txt","w");
//         fclose(myname);
//     }else{
//         printf("Data written sucessfully");
//         fclose(myname);
//     }
//     return 0;
// }

// //--fputc in c----
// // --creating and writing into the file----

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// int main(){
//     FILE *itsme;
//     char name[30] = "My name is sushant khadka";
//     int loop = strlen(name);
//     int counter;

//     itsme = fopen("sushant.txt","w");

//     if (itsme==NULL)
//     {
//         printf("Unable to open the file");
//     }else{
//         for (int counter = 0; counter < loop; counter++)
//         {
//             fputc(name[counter],itsme);
//         }
//         printf("data written successfully");
//         fclose(itsme);
//     }
//     return 0;
// }

// // --uses of gets function in c language----
// // --helps to read the input from the user--
// // --used instead of scanf function because can take input along with space also

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// int main(){
//     FILE *my;

//     char name[20];
//     gets(name);

//     printf("%s",name);
//     return 0;    
// }

// // --uses of fputs function in c language----
// // -- write the user inputed value into the file---

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// int main(){
//     FILE *my;

//     char name[100];
//     my = fopen("sushant.txt","a");

//     if (my == NULL)
//     {
//         printf("unable to open the file");
//     }else{
//         gets(name);
//         fputs(name,my);  // -- write the whole input value in the file--
//         printf("Data written successfully");
//         fclose(my);
//     }
    
//     return 0;    
// }
