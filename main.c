#include"Struct.h"
void testIntList()
{
    //Node a;
    //List L = &a;
    //Node n1;
    //Node n2;
    //Node n3;
    //n1.data = 2;
    //n2.data = 4;
    //n3.data = 8;
    //L->next = &n1;
    //n1.next = &n2;
    //n2.next = &n3;
    //n3.next = NULL;


}
void testCharList()
{
    Node a, b;
    List str1 = &a;
    Node n1;
    Node n2;
    Node n3;
    n1.data = 'a';
    n2.data = 'g';
    n3.data = 'o';
    str1->next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    List str2 = &b;
    Node n11;
    Node n22;
    Node n33;
    n11.data = 'a';
    n22.data = 'b';
    n33.data = 'c';
    str2->next = &n11;
    n11.next = &n22;
    n22.next = &n3;
    n33.next = NULL;
    findSameLists(str1, str2);
}
void testInts()
{
    int arr[] = { 0,0,1,0,3,0 };
    //sequence(arr, 5, 2);
    //showInts(arr, 5);

    //int A[] = { 1,8,9 };
    //int B[] = { 2,6,10 };
    //int ret=mid2Ints(A, B,3);

    int ret=findMainInts(arr, 6);
    showInts(arr, 6);
    printf("ret=%d\n", ret);

}
void testString()
{

}
int main()
{
    testInts();
    return 0;
}