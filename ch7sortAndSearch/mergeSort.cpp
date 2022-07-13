
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *, int *);
void mergeSortIterative(int arr[]);
void printArr(int arr[], int);

int main()
{
    int originArr[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
    int lenth = sizeof(originArr) / sizeof(originArr[0]);
    mergeSortIterative(originArr);
    return 0;
}

void printArr(int arr[], int len)
{
    for (int k = 0; k < len; k++)
    {

        printf("%2d ", arr[k]);
    }
    puts("");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}