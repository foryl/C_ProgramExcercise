#include<stdlib.h>

#define QUEUE_TYPE int 

/* 创建队列 */
void CreateQueue(size_t size);

/* 删除队列 */
void DestoryQueue(void);

/* 插入元素 */
void QueueInsert(QUEUE_TYPE value);

/* 删除元素 */
void QueueDelete(void);

/* 获取队列中第一个元素 */
QUEUE_TYPE QueueGetFirst();

/* 判断是否为空 */
int QueueIsEmpty(void);

/* 判断是否队满 */
int QueueIsFull(void);