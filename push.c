#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

#define STACK_SIZE 100

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

/*
 * Function to print all elements in the stack
 */
void pall() {
    if (top == -1) {
        /* Stack is empty, don't print anything */
        return;
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    char opcode[100];
    char value_str[100];
    int value;

    /* Assume opcode and value are read from input file or user input */

   /* Example usage */
    strcpy(opcode, "push");
    strcpy(value_str, "42");

    if (strcmp(opcode, "push") == 0) {
        if (sscanf(value_str,"%d", &value) == 1) {
            push(value);
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
