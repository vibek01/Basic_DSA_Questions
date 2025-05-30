#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
typedef struct {
    int data[MAX_SIZE];
    int top1; // Top index for stack 1
    int top2; // Top index for stack 2
} TwoStacks;
void initTwoStacks(TwoStacks *stacks) {
    stacks->top1 = -1;
    stacks->top2 = MAX_SIZE; // Top index for stack 2 is at the end of the array
}
void push1(TwoStacks *stacks, int item) {
    if (stacks->top1 < stacks->top2 - 1) { // Check if there is space for another element
        stacks->data[++stacks->top1] = item;
    } else {
        printf("Stack 1 Overflow\n");
    }
}
void push2(TwoStacks *stacks, int item) {
    if (stacks->top1 < stacks->top2 - 1) { // Check if there is space for another element
        stacks->data[--stacks->top2] = item;
    } else {
        printf("Stack 2 Overflow\n");
    }
}
int pop1(TwoStacks *stacks) {
    if (stacks->top1 >= 0) { // Check if stack 1 is not empty
        return stacks->data[stacks->top1--];
    } else {
        printf("Stack 1 Underflow\n");
        return -1;
    }
}
int pop2(TwoStacks *stacks) {
    if (stacks->top2 < MAX_SIZE) { // Check if stack 2 is not empty
        return stacks->data[stacks->top2++];
    } else {
        printf("Stack 2 Underflow\n");
        return -1;
    }
}
int main() {
    TwoStacks stacks;
    initTwoStacks(&stacks);
    // Push elements to both stacks
    push1(&stacks, 10);
    push1(&stacks, 20);
    push2(&stacks, 30);
    push2(&stacks, 40);
    // Pop elements from both stacks and print
    printf("Popped from stack 1: %d\n", pop1(&stacks)); // Output: 20
    printf("Popped from stack 2: %d\n", pop2(&stacks)); // Output: 40
    return 0;
}