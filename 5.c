#include <stdio.h>
#include <stdlib.h> // For exit() function

#define N 5 // Size of the queue

int main() {
    int queue[N]; // Array to hold queue elements
    int ch = 1;   // Variable for menu choice
    int front = 0; // Index of the front element
    int rear = 0;  // Index for the next insert position
    int i;         // Loop variable
    int j = 1;     // For labeling input elements

    printf("Queue using Array");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");

    while (ch) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: // Insertion
                if (rear == N) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter element %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;
                
            case 2: // Deletion
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    printf("\nDeleted Element is %d", queue[front++]);
                    // Optionally reset the queue if it's empty
                    if (front == rear) {
                        front = rear = 0; // Reset queue indices
                    }
                }
                break;
                
            case 3: // Display
                printf("\nQueue Elements are:\n");
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    for (i = front; i < rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;
                
            case 4: // Exit
                exit(0);
                break;
                
            default:
                printf("\nWrong Choice: Please see the options");
                break;
        }
    }

    return 0;
}

