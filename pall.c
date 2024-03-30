#include "monty.h"

/*
 * Function to print all elements in the stack
 */
void pall() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
