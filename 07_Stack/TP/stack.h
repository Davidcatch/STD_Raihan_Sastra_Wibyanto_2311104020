#ifndef STACK_H
#define STACK_H

typedef char infotype;

struct stack {
    infotype info[15];
    int Top;
};

void createStack_2311104020(stack &S);
bool isEmpty_2311104020(stack S);
bool isFull_2311104020(stack S);
void push_2311104020(stack &S, infotype x);
int pop_2311104020(stack &S);
void printInfo_2311104020(stack S);

#endif
