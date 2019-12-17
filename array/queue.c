#include "queue.h"
#include <stdio.h>
#include <assert.h>

#define QUEUE_SIZE 100
#define ARRAY_SIZE (QUEUE_SIZE + 1)

static QUEUE_TYPE queue[ARRAY_SIZE];
static size_t front = 1;
static size_t rear = 0;

void QueueInsert(QUEUE_TYPE value)
{
    assert(!QueueIsFull());
    rear = (rear + 1) % ARRAY_SIZE;
    queue[rear] = value;
}

void QueueDelete(void)
{
    assert(!QueueIsEmpty());
    front = (front + 1) % ARRAY_SIZE;
}

QUEUE_TYPE QueueGetFirst()
{
    assert(!QueueIsEmpty());
    return queue[front];
}

int QueueIsEmpty(void)
{
    return (rear + 1) % ARRAY_SIZE == front;
}

int QueueIsFull(void)
{
    return (rear + 2) % ARRAY_SIZE == front;
}

void QueueInit(void)
{
    rear = 98;
    front = 97;
}