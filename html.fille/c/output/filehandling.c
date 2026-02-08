#include<stdio.h>
int main(){
    FILE*ptr;
    ptr=fopen("Devika singh.text","W");
    int num=10;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}