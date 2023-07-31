//
// Created by john on 2023/7/30.
//
#include <stdio.h>
#include "stdlib.h"
#define InitSize 10
//自定义书顺序表结构
typedef struct {
    int *data;              //动态指针
    int MaxSize;            //顺序表的最大容量
    int length;             //顺序表表长存储
}SqList;                    //结构体名称

//基本操作--初始化一个顺序表
void InitList(SqList L){
    //用malloc申请一篇连续的存储空间
    L.data=(int *) malloc(InitSize*sizeof(int ));
    L.length=0;
    L.MaxSize=InitSize;
}

//顺序表长度再分配
void IncreaseSize(SqList L,int len){
    //指针的指针，把原数据索引到另一个指针
    int *p=L.data;
    //重新申请一片内存空间
    L.data=(int *) malloc((L.MaxSize+len)*sizeof(int));
    //数据转储
    for(int i=0; i<=L.length; i++){
        L.data[i]=p[i];
    }
    //修改表长
    L.MaxSize=L.MaxSize+len;
    //释放原来内存空间
    free(p);
}

int main(){  
    SqList L;               //创建一个顺序表(申明一个顺序表)
    InitList(L);            //初始化顺序表
    IncreaseSize(L,5);
    return 0;
}
