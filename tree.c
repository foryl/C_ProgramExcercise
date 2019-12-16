#include "tree.h"
#include "queue.h"
#include<assert.h>
#include<stdio.h>

#define TREE_SIZE 100 
#define ARRAY_SIZE (TREE_SIZE+1)

static TREE_TYPE tree[TREE_SIZE];

static int LeftChild(int current)
{
    return current * 2;
}

static int RightChild(int current)
{
    return current * 2 + 1;
}

void Insert(TREE_TYPE value)
{
    int current;
    assert(value != 0);
    current = 1;
    while(tree[current] != 0) {
        if(value < tree[current]) {
            current = LeftChild(current);
        } else {
            assert(value != tree[current]);
            current = RightChild(current);
        }
        if(current > ARRAY_SIZE) {
            printf("this assert position, current value is %d", current);
            //assert(current < ARRAY_SIZE);
            return;
        }
    }
    //printf("this is insert value:%d, will insert position is %d \n", value, current);
    tree[current] = value;
}

TREE_TYPE* Find(TREE_TYPE value)
{
    int current;
    current = 1;
    while(current < ARRAY_SIZE && tree[current] != value) {
        if(value < tree[current]) {
            current = LeftChild(current);
        } else {
            current = RightChild(current);
        }
    }
    if (current < ARRAY_SIZE) {
        return tree + current;
    } else {
        return 0;
    }
}

static void DoPreOrderTraverse(int current, void (*callback)(TREE_TYPE value))
{
    if(current < ARRAY_SIZE && tree[current] != 0) {
        callback(tree[current]);
        DoPreOrderTraverse(LeftChild(current), callback);
        DoPreOrderTraverse(RightChild(current), callback);
    }
}

void PreOrderTraverse(void (*callback)(TREE_TYPE value)) 
{
    DoPreOrderTraverse(1, callback);
}


static void DoBackOrderTraverse(int current, void (*callback)(TREE_TYPE value))
{
    if(current < ARRAY_SIZE && tree[current] != 0) {
        DoBackOrderTraverse(LeftChild(current), callback);
        DoBackOrderTraverse(RightChild(current), callback);
        callback(tree[current]);
    }
}

void BackOrderTraverse(void (*callback)(TREE_TYPE value))
{
    DoBackOrderTraverse(1, callback);
}


static void DoMidOrderTraverse(int current, void(*callback)(TREE_TYPE value))
{
    if(current < ARRAY_SIZE && tree[current] != 0) {
        DoMidOrderTraverse(LeftChild(current), callback);
        callback(tree[current]);
        DoMidOrderTraverse(RightChild(current), callback);
    }
}

void MidOrderTraverse(void (*callback)(TREE_TYPE value)) 
{
    DoMidOrderTraverse(1, callback);
}

static void DoLevelOrderTraverse(int current, void(*callback)(TREE_TYPE value))
{
    QueueInsert(current);
    while(!QueueIsEmpty()) {
        current = QueueGetFirst();
        callback(tree[current]);
        int left = LeftChild(current);
        int right = RightChild(current);
        if(tree[left] != 0) {
            QueueInsert(left);
        }
        if(tree[right] != 0) {
            QueueInsert(right);
        }
        QueueDelete();
    }
} 

void LevelOrderTraverse(void (*callback)(TREE_TYPE value)) 
{ 
    DoLevelOrderTraverse(1, callback);
}