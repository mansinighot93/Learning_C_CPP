#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){

    int *ptr=(int *)malloc(sizeof(int));
    *ptr = 30;

    struct Point{
        int x;
        int y;
    };

    struct Point startPoint;
    startPoint.x=200;
    startPoint.y=300;
    printf("\nUsing Dot Operator x=%d,y=%d",startPoint.x,startPoint.y);

    struct Point * ptrPoint = (struct Point *)malloc(sizeof(struct Point));
    ptrPoint->x=45;
    ptrPoint->y=133;
    printf("\nUsing Arrow Operator x=%d,y=%d",ptrPoint->x,ptrPoint->y);

    int pointSize = sizeof(struct Point);
    printf("\nPoint Size :%d",pointSize);

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

    free(ptr);
    free(ptrPoint);
}