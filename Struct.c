#include "Struct.h"
#include<stdio.h>

void swapInts(int arr[],int L,int R)
{
    int temp = arr[L];
    arr[L] = arr[R];
    arr[R]=temp;
} 

int findKList(List L, int k)
{
    if (L == NULL || k <= 0)return 0;
    int cnt = 0;
    Node* p = L->next;
    while (p)
    {
        ++cnt;
        p = p->next;
    }
    int idx = cnt - k + 1;
    if (idx <= 0)return 0;
    p = L;
    while (idx > 0)
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
}


