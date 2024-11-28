#include <stdio.h>

// Function declarations
void push();
void pop();
void peek();
void show();

// Stack array and variables
int stack[50], n, top = -1;

void main() {
    int option = 0; // User option for menu

    printf("Enter the size of the stack: ");
    scanf("%d", &n);

    printf("\nStack implementation using array\n");

    // Menu-driven program
    while (option != 4) {
        printf("\nChoose one of the below options...\n");
        printf("1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Please enter a valid option!\n");
                break;
        }
    }
}

// Push operation
void push() {
    int value;
    if (top == n - 1) {
        printf("\nStack Overflow! Cannot add more elements.\n");
    } else {
        printf("\nEnter the value to push: ");
        scanf("%d", &value);
        top = top + 1;
        stack[top] = value;
        printf("Value pushed: %d\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("\nStack Underflow! No elements to pop.\n");
    } else {
        printf("Value popped: %d\n", stack[top]);
        top = top - 1;
    }
}

// Peek/Show top element of stack
void peek() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

// Display stack
void show() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
