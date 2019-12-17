#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

void PrintNumber(TREE_TYPE value)
{
    printf("value is %d\n", value);
}

int main()
{
    int size = 100;
    unsigned int count;
    printf("Hello World!\n");
    int array[] = {16,19,21,15,17};
    for(count = 0; count< sizeof(array)/sizeof(array[0]); count++){
        //printf("this count value is %d\n", count);
        Insert(array[count]);
    }

    printf("This is previous order traverse:\n");
    PreOrderTraverse(PrintNumber);
    
    printf("This is back order traverse:\n");
    BackOrderTraverse(PrintNumber);

    printf("This is mid order traverse:\n");
    MidOrderTraverse(PrintNumber);

    printf("This is level order traverse\n");
    LevelOrderTraverse(PrintNumber);
    
    //system("pause");
    return 0;
}   