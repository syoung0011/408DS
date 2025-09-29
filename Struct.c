#include "Struct.h"
#include<stdio.h>
#include<stdbool.h>
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

void findSameLists(List str1, List str2)
{
    if (str1 == NULL || str2 == NULL)
    {
        printf("NOT EXIST.\n");
        return;
    }
    Node* p = str1->next, * q = str2->next;
    int size1 = 0, size2 = 0;
    while (p)
    {
        ++size1;
        p = p->next;
    }
    while (q)
    {
        ++size2;
        q = q->next;
    }
    p = str1->next,q = str2->next;
    int cnt = size1 - size2;
    while(cnt>0)
    {
        p = p->next;
        --cnt;
    }
    while (cnt < 0)
    {
        q = q->next;
        ++cnt;
    }
    /*
    基于data
    */
    //bool isLast = false;
    //while (p && q)
    //{
    //    if (p->data == q->data)
    //    {
    //        if (!isLast)isLast = true;
    //        printf("%c", p->data);
    //    }
    //    else if (isLast)
    //    {
    //        printf(" IS IGNORED.\n");
    //        isLast = false;
    //    }
    //    p = p->next;
    //    q = q->next;
    //}
    //if (isLast)printf(" IS THE RESULT.\n");
    //else printf("NOT EXIST.\n");

    /*
    基于node
    */
    while (p && q)
    {
        if (p == q)
        {
            while (p)
            {
                printf("%c", p->data);
                p = p->next;
            }
            printf(" IS THE RESULT.\n");
            return;
        }
        p = p->next;
        q = q->next;
    }
    printf("NOT EXSIT.\n");
}


