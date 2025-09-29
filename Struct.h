#pragma once
#include<stdio.h>

//typedef int ElemType;
typedef char ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
}Node, * List;

/*
lib
*/
void swapInts(int arr[], int L,int R);
void showInts(int arr[], int n);

/*
2009.42
查找链表中倒数第k个元素
*/
int findKList(List L, int k);

/*
2010.42
数组元素左移
1.逆转数组全部
2.分别逆转数组两部分
*/
void reverseInts(int arr[], int L, int R);
void sequence(int arr[], int n,int p);

/*
2011.42
查找两个升序数组的中位数
*/
int mid2Ints(int A[], int B[], int L);

/*
2012.42
查找链表共同后缀
*/
void findSameLists(List str1, List str2);