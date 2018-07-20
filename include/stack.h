#ifndef STACK_H
#define STACK_H

#include <common_header.h>
#include <cstdlib>
#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

typedef int SElemType;

typedef struct {
    SElemType * base;
    SElemType * top;
    int stack_size; // 当前已经分配的存储空间
}SqStack;

// ----- 基本操作的函数原型说明 -----
Status initStack(SqStack &stack);
    // 构造一个空栈
Status destroyStack(SqStack &stack);
    // 销毁栈
Status clearStack(SqStack &stack);
    // 把stack设为空栈
Status stackEmpty(SqStack &stack);
    // 若stack为空栈，返回TRUE，否则返回FALSE
int stackLength(SqStack stack);
    // 返回stack的元素个数
Status getTop(SqStack stack, SElemType &e);
    // 若栈不空，则用e范围stack的栈顶元素，并返回OK；否则返回ERROR
Status push(SqStack &stack, SElemType e);
    // 入栈
Status pop(SqStack &stack, SElemType &e);
    // 若栈不空，则删除stack的栈顶元素，并用e返回该元素值
Status stackTraverse(SqStack stack);
    // 打印


// ----- 基本操作的算法描述 ----
Status initStack(SqStack &stack) {
    stack.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!stack.base)
        return ERROR;
    stack.top = stack.base;
    stack.stack_size = STACK_INIT_SIZE;
    return OK;
}// initStack

Status destroyStack(SqStack &stack) {
    if(!stack.base)
        return ERROR;
    stack.top = stack.base = NULL;
    stack.stack_size = 0;
    return OK;
}// destroyStack

Status clearStack(SqStack &stack) {
    stack.top = stack.base;
    return OK;
}// clearStack

Status stackEmpty(SqStack &stack) {
    if (stack.top == stack.base)
        return TRUE;
    return FALSE;
}// stackEmpty

int stackLength(SqStack stack) {
    return stack.top - stack.base;
}// stackLength

Status getTop(SqStack stack, SElemType &e) {
    if(stack.top == stack.base)
        return ERROR;
    e = * (stack.top - 1);
    return OK;
}// getTop

Status push(SqStack &stack, SElemType e) {
    if (stack.top - stack.base >= stack.stack_size) {
        stack.base = (SElemType * )realloc(stack.base, (stack.stack_size + STACK_INCREMENT) * sizeof(SElemType));
        if (!stack.base)
            return OVERFLOW;
        stack.top = stack.base + stack.stack_size;
        stack.stack_size += STACK_INCREMENT;
    }
    * stack.top ++ = e;
    return OK;
}// push

Status pop(SqStack &stack, SElemType &e){
    if (stack.top == stack.base)
        return ERROR;
    e = * --stack.top;
    return OK;
}// pop

#endif

