#include<stdio.h>
int main () {
    char op;
    float num1,num2;
    printf("enter an operator(+,-,*,/) :");
    scanf("%c",&op);
    printf("enter two number : ");
    scanf("%f",&num1,&num2);
    switch(op) {
        case'+':
        printf("result=%.2f",num1+num2);
        break;

         case'-': 
         printf("result=%.2f",num1-num2);
         break;
         case'*':
         printf("result=%.2f",num1*num2);
         break;
         case'/':
         if (b != 0)
                  printf("result=%.2f",num1/num2);
        else
         printf("error!division by zero");
         break;
         default:
         printf("invalid operator");

        }
        return 0;
    }
