#include "stack.h"
#include <stdio.h>
#define MAXSIZE 5
int main(){
    extern struct stack s1;
    s1.top=-1;
    
    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);
    push(&s1, 40);
    push(&s1, 100);
    push(&s1, 50);
    
    display(&s1);
    //End of main function
    int poppedValue = pop(&s1);
    printf("popped value= %d \n", poppedValue);
    
    poppedValue = pop(&s1);
    printf("popped value= %d \n", poppedValue);

    poppedValue = pop(&s1);
    printf("popped value= %d \n", poppedValue);

    poppedValue = pop(&s1);
    printf("popped value= %d \n", poppedValue);

    poppedValue = pop(&s1);
    printf("popped value= %d \n", poppedValue);

    poppedValue = pop(&s1);
    printf("popped value= %d \n", poppedValue);

    if(poppedValue==0){
        printf("stack is empty.");
    }else{
        display(&s1);
    }
    
    
}
