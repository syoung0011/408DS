#include "Struct.h"
#include<stdio.h>

void swapInts(int arr[],int L,int R)
{
    int temp = arr[L];
    arr[L] = arr[R];
    arr[R]=temp;
}
void showInts(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ",arr[i]);
    printf("\n");
}


int findKList(List L, int k)
{
    if (L == NULL || k <= 0)return 0;
    int cnt = 0;
    Node* p = L->next;
    while (p)   // 统计总长度
    {
        ++cnt;
        p = p->next;
    }
    int idx = cnt - k + 1;
    if (idx <= 0)return 0;  // 越界
    p = L;
    while (idx > 0)  // 查找目标
    {
        --idx;
        p = p->next;
    }
    printf("%d", p->data);
    return 1;
}

void reverseInts(int arr[], int L, int R)
{
    while (L < R)
    {
        swapInts(arr, L, R);
        ++L;
        --R;
    }
}

void sequence(int arr[],int n, int p)
{
    reverseInts(arr, 0, n - 1);
    reverseInts(arr, n - p, n - 1);
    reverseInts(arr, 0, n - p - 1);
}

int mid2Ints(int A[], int B[], int L)
{
    //if (L <= 0)return -1;
    int p=0,q = 0, temp = -1;
    for(;L>0;--L)
    {
        if (A[p] < B[q])
            temp = A[p++];
        else
            temp = B[q++];
    }
    return temp;
}


