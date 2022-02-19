#include<stdio.h>

int display(int *, int *);
int main(){

    int a = 100;
    int b = 200;

    display(&a,&b);
    return 0;

}
int display(int *p, int *q){
    printf("%d %d",*p,*q);
}
