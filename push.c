#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1; /* Stack is initially empty */

/*
 * Function to push an element onto the stack
 * Parameters:
 *   value: The integer value to be pushed onto the stack
 */
void push(int value) {
    if (top == STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    } else {
        top++;
        stack[top] = value;
    }
}

/*
 * Function to print all elements in the stack
 */
void pall() {
    int i;
    if (top == -1) {
        /* Stack is empty, don't print anything */
        return;
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    char opcode[100];
    int value;

    /* Assume opcode and value are read from input file or user input */

   /* Example usage */
    strcpy(opcode, "push");
    value = 42;

    if (strcmp(opcode, "push") == 0) {
        if (value != 0 || strcmp(value, "0") == 0) {
            push(atoi(value));
        } else {
            printf("L%d: usage: push integer\n", __LINE__);
            exit(EXIT_FAILURE);
        }
    } else if (strcmp(opcode, "pall") == 0) {
        pall();
    } else {
        printf("Invalid opcode\n");
    }

    return 0;
}
