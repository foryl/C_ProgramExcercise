#define STACK_TYPE int 

/* 将一个新值压入到栈中 */
void StackPush(STACK_TYPE value);

/* 从栈中弹出一个值 */
void StackPop(void);

/* 获取栈顶 */
STACK_TYPE StackTop(void);

/* 判断栈是否为空 */
int StackIsEmpty(void);

/* 判断是否栈满 */
int StackIsFull(void);

/*  */