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
    if (L == NULL || k <= 0)return -1;
    int cnt = 0;
    Node* p = L->next;
    while (p)   // 统计总长度
    {
        ++cnt;
        p = p->next;
    }
    int idx = cnt - k + 1;
    if (idx <= 0)return -1;  // 越界
    p = L;
    while (idx > 0)  // 查找目标
    {
        --idx;
        p = p->next;
    }
    return p->data;
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
    //if (L <= 0)return -1; // 被包含了
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

int huafen(int arr[], int L, int R)
{
    int mid = arr[L];
    while (L < R)
    {
        while (arr[R] >= mid&&L<R)
            --R;
        arr[L] = arr[R];
        while (arr[L] <= mid && L < R)
            ++L;
        arr[R] = arr[L];
    }
    arr[L] = mid;
    return L;
}

void QSort(int arr[], int L, int R)
{
    if (L >= R)return;
    int mid = huafen(arr, L, R);
    QSort(arr, L, mid - 1);
    QSort(arr, mid + 1, R);
}
void printfU(int mod)
{
    switch (mod)
    {
    case 1:

        break;
    default:
        printf("uData miss\n");
        break;
    }
}
void showList(List L)
{
    if (L == NULL)return;
    Node* p = L->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int findMainInts(int arr[],int n)
{
    QSort(arr, 0, n - 1);
    int idx = n / 2;
    int mid = arr[idx],cnt=0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == mid)
            ++cnt;
    }
    if (cnt > idx)
        return mid;
    else
        return -1;
}

int preOrderWPL(BTree root, int n)
{
    if (root == NULL)return 0;
    return root->weight * n+preOrderWPL(root->left, n + 1)+ preOrderWPL(root->right, n + 1);
}

void calWPL(BTree root)
{
    printf("WPL=%d\n",preOrderWPL(root, 0));
}

void delSameList(List L,int n)
{
    if (L==NULL||n <= 0)return;
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
        arr[i] = 0;
    Node* p = L->next;
    Node* pre = L;
    while (p != NULL)
    {
        int idx = p->data;
        if (idx < 0)
            idx = -idx;
        if (arr[idx] == 0)
        {
            arr[idx] = 1;
            pre = p;
            p = p->next;
        }
        else
        {
            Node* q = p;
            p = p->next;
            pre->next = p;
            //free(q);  // 栈上对象free报错
        }
    }
    free(arr);
}


