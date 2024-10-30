#include<stdio.h>

void (*ptrfunction) ();

void show(){
    printf("\nHello Using Show Function\n");
}

void display(){
        printf("\nHello Using Display Function\n");
}
int main(){
    printf("\nHello Using Main Function\n");
    int *ptr;
    int *ptrNode = NULL;
    show();
    printf("\n");
    ptrfunction = show;
    printf("\n");
    ptrfunction();
}