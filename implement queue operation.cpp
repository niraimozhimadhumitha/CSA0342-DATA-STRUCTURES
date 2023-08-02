#include <stdlib.h>
#define MAX_SIZE 100
typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;
void initializeQueue(Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}
int isEmpty(Queue* queue) {
    return queue->front == -1;
}
int isFull(Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}
void enqueue(Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->data[queue->rear] = value;
}
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    }
    int dequeuedValue = queue->data[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return dequeuedValue;
}
void display(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = queue->front;
    while (i != queue->rear) {
        printf("%d, ", queue->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", queue->data[queue->rear]);
}
int main() {
    Queue queue;
    initializeQueue(&queue);
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    display(&queue); 
    int dequeuedElement = dequeue(&queue);
    printf("Dequeued element: %d\n", dequeuedElement); 
    display(&queue); 

    return 0;
}

