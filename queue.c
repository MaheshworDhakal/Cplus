#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int data);
void dequeue();
void display();

int main() {
    int data, choice;
    while (1) {
        printf("Enter 1 for enqueue:\n");
        printf("Enter 2 for dequeue:\n");
        printf("Enter 3 for display:\n");
        printf("Enter 4 for exit:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data:\n");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice:\n");
        }
    }
}

void enqueue(int data) {
    if (rear == SIZE - 1) {
        printf("Queue overflow:\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow:\n");
    } else {
        printf("Data dequeued: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty:\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}
