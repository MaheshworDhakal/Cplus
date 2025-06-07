#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;



void enqueue(int data);
void dequeue();
void display();

int main() {
    int choice, data;
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
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    printf("Data enqueued: %d\n", data);
}

void dequeue() {
    if (head == NULL) {
        printf("Queue underflow:\n");
        return;
    }
    struct Node* ptr = head;
    head = head->next;
    printf("Data dequeued: %d\n", ptr->data);
    free(ptr);
}

void display() {
    struct Node* ptr = head;
    if (ptr == NULL) {
        printf("Queue is empty:\n");
        return;
    }
    printf("Queue elements: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
