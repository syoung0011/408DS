#pragma once
#include<stdio.h>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
}Node, * List;

/*
lib
*/
void swapInts(int arr[], int L,int R);

/*
2009.42
查找链表中倒数第k个元素
*/
int findKList(List L, int k);

/*
2010.42
数组元素左移
1.逆转数组全部
2.逆转数组末尾
*/
void reverseInts(int arr[], int L, int R);
void sequence(int arr[], int n,int p);

