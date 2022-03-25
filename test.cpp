
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *, int *);
void shellSort(int arr[], int);
void printArr(int arr[], int);
int calcArrLen(int arr[]);
int main()
{
    float a = 5;
    float b = a / 2;
    printf("%d\n", int(ceil(b)));
    int originArr[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
    int lenth = sizeof(originArr) / sizeof(originArr[0]);
    printf("%d\n", lenth);
    printf("len = %d", calcArrLen(originArr));
}
int calcArrLen(int arr[])
{
    // int len = sizeof(arr) / sizeof(arr[0]);
    // return len;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int len)
{
    for (int k = 0; k < len; k++)
    {

        printf("%d ", arr[k]);
    }
    puts("");
}