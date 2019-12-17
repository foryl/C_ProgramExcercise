#include "stack.h"
#include <assert.h>

#define STACK_SIZE 100 

static STACK_TYPE stack[STACK_SIZE];
static int top_element = -1;

/* 将一个新值压入到栈中 */
void StackPush(STACK_TYPE value)
{
    assert(!StackIsFull());
    top_element += 1;
    stack[top_element] = value;
}

/* 从栈中弹出一个值 */
STACK_TYPE StackPop(void)
{
    assert(!StackIsEmpty());
    STACK_TYPE result = stack[top_element];
    top_element -= 1;
    return result;
}

/* 获取栈顶 */
STACK_TYPE StackTop(void)
{
    assert(!StackIsEmpty());
    return stack[top_element];
}

/* 判断栈是否为空 */
int StackIsEmpty(void)
{
    return top_element == -1;
}

/* 判断是否栈满 */
int StackIsFull(void)
{
    return top_element == (STACK_SIZE -1);
}