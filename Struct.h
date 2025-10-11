#pragma once
#include<stdio.h>
#include <stdlib.h>

typedef int ElemType;
//typedef char ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
}Node, * List;

typedef struct BTNode {
	struct BTNode* left;
    int weight;
    struct BTNode* right;
}BTNode,*BTree;

/*
lib
*/
void swapInts(int arr[], int L,int R);
void showInts(int arr[], int n);
int huafen(int arr[], int L, int R);
void QSort(int arr[], int L, int R);
void printfU(int mod);
void showList(List L);

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
注：只支持在屏幕上打印结果，不支持保存结果
*/
void findSameLists(List str1, List str2);

/*
2013.41
查找数组主元素
1.快排
2.计数
*/
int findMainInts(int arr[],int n);

/*
2014.41
计算二叉树WPL
遍历的改造
*/
int preOrderWPL(BTree root, int n);
void calWPL(BTree root);

/*
2015.41
删除链表重复值
注：测试案例需为栈上对象，具体见代码
*/
void delSameList(List L,int n);