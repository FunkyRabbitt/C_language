// Determine the number is prime,composition,odd, even, zero,positive or negative
#include<stdio.h>
int main(){
    int number;

// taking the input from the user
    printf("Enter the number: ");
    scanf("%d",&number);
    
    //checking if the number is equal to zero
    if (number==0)
    {
        printf("The number is equal to zero:");
        //checking the number is positive or negative
        // for negative number
    }else if (number<0)
    {
        if ((number==-1)||(number==-3)) // check if the number is equal to 1 or 3 
        {
            printf("Negative,odd and not prime nor compositon");
        }else if (number==-2)  // check if the number is equal to 2
        {
            printf("negative,even,and not prime nor composition");
        }else
        {
            if (number%2==0) // checking if the number is even or odd
            {
                // if the number is positive
                printf("negative,even and composition");
            }else  // if the number is odd
            {
                if (number%3==0) // check the odd number for the prime or composition
                {
                    printf("Negative,odd,composition");
                }else
                {
                    printf("negative and not prime nor composition");
                }
            } 
        } 
        // for positive number
    }else
    {
        if ((number==1)||(number==3))
        {
            printf("Positive,odd and not prime nor compositon");
        }else if (number==-2)
        {
            printf("Positive,even,and not prime nor composition");
        }else
        {
            if (number%2==0) // even
            {
                printf("Positive,even and composition");
            }else
            {
                if (number%3==0)
                {
                    printf("Positive,Odd and Compositon");
                }else
                {
                    printf("Positive and Prime");
                }
            }
        }
    }
    return 0;
}