
struct queue{
    int arr[5];
    int front,rear;
};

void enqueue( struct queue *ptrQueue, int data);
int dequeue(struct queue *ptrQueue);
void display(struct queue *ptrQueue);