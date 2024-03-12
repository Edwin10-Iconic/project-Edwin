#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct stack {
    int items[STACK_SIZE];
    int top;
};

typedef struct stack Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return (s->top == -1);
}

int isFull(Stack *s) {
    return (s->top == STACK_SIZE - 1);
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

int top(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return s->items[s->top];
}

int count(Stack *s) {
    return (s->top + 1);
}

void dup(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    push(s, top(s));
}

void add(Stack *s) {
    if (count(s) < 2) {
        printf("Not enough elements to perform addition\n");
        return;
    }
    int operand1 = pop(s);
    int operand2 = pop(s);
    push(s, operand1 + operand2);
}

int main() {
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("Count of elements in the stack: %d\n", count(&s));

    printf("Adding top two elements...\n");
    add(&s);
    printf("Result after addition: %d\n", top(&s));

    printf("Duplicating top element...\n");
    dup(&s);
    printf("Count of elements in the stack after duplication: %d\n", count(&s));

    return 0;
}
