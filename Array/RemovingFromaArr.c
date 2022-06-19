//--Removing the Element from the array---
#include<stdio.h>
void Remove(int A[],int);
int main(){
    
    int A[] ={12,45,67,78,89},Num;
    printf("Enter the Number : ");
    scanf("%d",&Num);
    Remove(A,Num);
    return 0;
}
void Remove(int A[],int Number){
    int j,count=0,Arr[5];
    for(j=0;j<5;j++){
        if(!(A[j]==Number)){
            Arr[count] = A[j];
            count++;
        }
    }
    int lenght = sizeof(A)- sizeof(int);
    for(int i=0;i<lenght;i++){
        printf("%d ",Arr[i]);
    }
}
