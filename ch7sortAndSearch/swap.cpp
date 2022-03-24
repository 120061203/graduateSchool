#include <stdio.h>
#include <stdlib.h>
#define SWAP2(x, y, t) ((t) = (a), (a) = (b), (b) = (t))
void swap(int *, int *);
void swap3(int &, int &);
void swap4(int *, int *);
void swap5(int *, int *);
int main()
{

    int a = 10;
    int b = 20;
    int t = 0;
    swap(&a, &b);
    printf("after swap a=%d\n", a);
    printf("after swap b=%d\n", b);
    puts("");
    a = 10;
    b = 20;
    SWAP2(a, b, t);
    printf("after swap2 a=%d\n", a);
    printf("after swap2 b=%d\n", b);
    puts("");
    a = 10;
    b = 20;
    swap3(a, b);
    printf("after swap3 a=%d\n", a);
    printf("after swap3 b=%d\n", b);
    puts("");
    a = 10;
    b = 20;
    swap4(&a, &b);
    printf("after swap4 a=%d\n", a);
    printf("after swap4 b=%d\n", b);
    puts("");
    a = 10;
    b = 20;
    swap5(&a, &b);
    printf("after xorSwap5 a=%d\n", a);
    printf("after xorSwap5 b=%d\n", b);
    puts("");
    system("pause");
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap4(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap5(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}