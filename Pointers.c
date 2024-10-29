#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int *ptr=(int *)malloc(sizeof(int));
    *ptr = 30;
    
    printf("\nAddress of Value:%d",ptr);
    printf("\nValue of Pointer:%d",*ptr);

    int intSize = sizeof(int);
    int charSize = sizeof(char);
    int floatSize = sizeof(float);
    int boolSize = sizeof(bool);

    printf("\n Integer Size:%d",intSize);
    printf("\n Character Size:%d",charSize);
    printf("\n Float Size:%d",floatSize);
    printf("\n Boolean Size:%d",boolSize);
}