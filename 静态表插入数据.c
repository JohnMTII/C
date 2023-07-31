#include <stdio.h>
#include "stdlib.h"
#define MaxSize 10
//自定义书顺序表结构
typedef struct {
    int data[MaxSize];      //动态指针
    int length;             //顺序表表长存储
}SqList;                    //结构体名称

//基本操作--初始化一个顺序表
void InitList(SqList L){
    L.length=0;
}
//第i位置插入元素e
void ListInsert(SqList L,int i,int e){
    for(int j=L.length;j>=i;j--)
       L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
}

int main(){
    SqList L;               //创建一个顺序表(申明一个顺序表)
    InitList(L);            //初始化顺序表
    ListInsert(L,3,3);
    printf("%d",L.length);
    return 0;
}
