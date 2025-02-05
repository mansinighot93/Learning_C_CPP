#define MAXSIZE 5

 struct stack{
    int arr[MAXSIZE];
    int top;
};
void push( struct stack *ptrStack, int data);
int pop(struct stack *ptrStack);
void display(struct stack *ptrStack);