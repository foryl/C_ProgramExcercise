#include "queue.h"

/*
* 二叉搜索树的接口
*/

#define TREE_TYPE int 

// insert 
void Insert(TREE_TYPE value);

//find 
TREE_TYPE *Find(TREE_TYPE value);

//PreOrderTraverse 前序遍历
void PreOrderTraverse(void (*callback)(TREE_TYPE value));

// 后序遍历
void BackOrderTraverse(void (*callback)(TREE_TYPE value));

//中序遍历
void MidOrderTraverse(void (*callback)(TREE_TYPE value));

// 层次遍历
void LevelOrderTraverse(void (*callback)(TREE_TYPE value));