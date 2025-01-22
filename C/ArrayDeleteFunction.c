#include <stdio.h>
int main() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;  
    int index_to_remove ; 

    printf("Original array: ");
    for (int i=0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    printf("Enter Index :");
    scanf("%d",&index_to_remove);
 
    for (int i=index_to_remove; i<size-1;i++) 
    {
        arr[i] = arr[i+1];
    }
    size--; 

    printf("Updated array: ");
    for (int i=0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
