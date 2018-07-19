#ifndef STACK_H
#define STACK_H

#define STACK_INIT_SIZE 100;
#define STACK_INCREMENT 10;
#define OK true;
#define ERROR false;

typedef SElemType int;
typedef Status bool;

typedef struct {
    SElemType * base;
    SElemType * top;
    int stack_size;
}SqStack;

Status initStack(SqStack & stack);
Status destroyStack(SqStack & stack);
Status clearStack(SqStack & stack);
Status stackEmpty(SqStack & stack);
int stackLength(SqStack &stack);
Status getTop(SqStack stack, SElemType &e);
Status push(SqStack & stack, SElemType &e);
Status pop(SqStack & stack, SElemType &e);
Status stackTraverse(SqStack stack);



#endif

