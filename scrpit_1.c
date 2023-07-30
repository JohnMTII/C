#include <stdio.h>
#include "stdlib.h"
#define MaxSize 10

//自定义书顺序表结构
typedef struct {
    int data[MaxSize];      //初始表长10，存储单元个数
    int length;             //顺序表表长存储
}SqList;                    //结构体名称

//基本操作--初始化一个顺序表
void InitList(SqList L){
    L.length=0;
}

int main(){
    SqList L;               //创建一个顺序表(申明一个顺序表)
    InitList(L);            //初始化顺序表
    for (int i = 0; i < MaxSize; i++) {
        printf("data[%d]=%d\n",i,L.data[i]);
    }
    return 0;
}
