#include<stdio.h>
int main(){
    int marks = 80;
    int *ptrMarks=NULL;
    ptrMarks=&marks;
    /*printf("\nMarks:%d",marks);
    printf("\nptrMarks:%d",ptrMarks);
    printf("\nValue of variable pointerd by ptrMarks:%d",*ptrMarks);

    marks=marks+1;
    printf("\nMarks:%d",marks);

    ptrMarks=ptrMarks+1;
    printf("\nptrMarks:%d",ptrMarks);

    *ptrMarks=(*ptrMarks)+1;
    printf("\nptrMarks:%d",*ptrMarks);*/

    int **ptr=NULL;
    ptr=&ptrMarks;
    printf("\nMarks:%d",marks);
    printf("\nptrMarks Address:%d",ptrMarks);
    printf("\nptrMarks pointing to variable value:%d",*ptrMarks);
    printf("\nptr Address:%d",ptr);
    printf("\nptr pointing to variable value:%d",**ptr);

    return 0;
}
