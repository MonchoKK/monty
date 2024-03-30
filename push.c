#include "monty.h"

int stack[STACK_SIZE];
int top = -1; 

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
