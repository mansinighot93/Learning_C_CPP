#include "queue.h"
#include<stdio.h>

int main()
{
    extern struct queue q1;
    
    enqueue(&q1,10);
    enqueue(&q1,20);
    enqueue(&q1,30);
    enqueue(&q1,40);
    enqueue(&q1,50);

    display(&q1);
    
}