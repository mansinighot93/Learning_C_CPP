#include "stack.h"
#include<stdio.h>



void push(struct stack *ptrStack, int data){
    //code implementation of push
    
    if(ptrStack->top==MAXSIZE-1){
        printf("Stack Overflow\n");
        return;
    }
    ptrStack->top=ptrStack->top+1;
    ptrStack->arr[ptrStack->top]=data;
}

int pop(struct stack *ptrStack){
    if(ptrStack->top == -1)
    {
      printf("stack underflow");
        return 0; 
       }    
    int result = ptrStack->arr[ptrStack->top];
     ptrStack->top--;
      return result; 
         }



void display(struct stack *ptrStack){
    //code implementation

    for(int i=0; i<=ptrStack->top; i++){
        printf("%d\n", ptrStack->arr[i]);
    }
}