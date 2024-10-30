#include<stdio.h>
int (*ptrArithmaticOperation)(int,int);

int add(int val1,int val2){
    return val1 + val2;
}

int substract(int val1,int val2){
    return val1 - val2;
}

int multiply(int val1,int val2){
    return val1 * val2;
}

int divide(int val1,int val2){
    return val1 / val2;
}

int main(){
    /*printf("\nFunction Pointer for invoking Arithmatic Operation\n");
    ptrArithmaticOperation = add;
    int result = ptrArithmaticOperation(8,6);
    printf("\nResult:%d",result);
    return 0;*/

      int num1, num2, operation;
    printf("\nFunction Pointer for invoking Arithmetic Operation\n");

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            ptrArithmaticOperation = add;
            break;
        case 2:
            ptrArithmaticOperation = substract;
            break;
        case 3:
            ptrArithmaticOperation = multiply;
            break;
        case 4:
            ptrArithmaticOperation = divide;
            break;
        default:
            printf("Invalid operation!\n");
    }

    int result = ptrArithmaticOperation(num1, num2);
    printf("Result: %d\n", result);

    return 0;
}