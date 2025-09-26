#include"Struct.h"
void testList()
{
    Node a;
    List L = &a;
    Node n1;
    Node n2;
    Node n3;
    n1.data = 2;
    n2.data = 4;
    n3.data = 8;
    L->next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
}
void testInts()
{
    int arr[] = { 1,2,3,4 };
    sequence(arr, 4, 2);
}
void testChars()
{

}
int main()
{
    testInts();
    return 0;
}