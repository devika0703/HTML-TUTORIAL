#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("enter the first number: ");
    scanf("%d", &num1);

    printf("enternthe second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("the sum of %d and %d is %d\h", num1,num2,sum);
    return 0;
}