#include <stdio.h>

int stack[5];
int top = -1;

void push(int value) {
    if (top == 4) {
        printf("\nStack is full");
    } else {
        ++top;
        stack[top] = value;
        printf("\nPushed %d", value);
    }
}

int pop() {
    if (top == -1) {
        printf("\nStack is empty");
        return -1;
    }

    int ele = stack[top];
    printf("\nPopped %d", ele);
    --top;
    return ele;
}

void peek() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nTop element is %d", stack[top]);
    }
}

void isEmpty() {
    if (top == -1)
        printf("\nStack is Empty");
    else
        printf("\nStack is not Empty");
}

void isFull() {
    if (top == 4)
        printf("\nStack is full");
    else
        printf("\nStack is not full");
}

void traversal() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nStack elements:\n");
        for (int i = 0; i <= top; i++) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    peek();
    traversal();

    return 0;
}
