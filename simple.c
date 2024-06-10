#include<stdio.h>
int main ( ){
    int principal , rate , time ;
    printf(" Enter Your Principal \n");
    scanf("%d",&principal);
    printf(" Enter Your Rate \n");
    scanf("%d",&rate);
    printf("Enter YOur time \n");
    scanf("%d",&time);
    printf("%d (Simple Intrest) :-", (principal * rate *time) /100); 


    return 0;
}