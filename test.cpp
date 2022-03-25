
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *, int *);
void shellSort(int arr[], int);
void printArr(int arr[], int);
int main()
{
    float a = 5;
    float b = a / 2;
    printf("%d", int(ceil(b)));
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