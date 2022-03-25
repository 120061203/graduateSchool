#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *, int *);
void shellSort(int arr[], int);
void printArr(int arr[], int);
int main()
{
    int originArr[] = {10, 9, 4, 5, 8, 2, 3, 1, 6, 7};
    shellSort(originArr, 10);
    return 0;
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

void shellSort(int arr[], int len)
{
    float span = float(len) / 2;
    int count = 1;
    while (span >= 1)
    {
        while (true)
        {
            int flag = 0; // f:0 no swap
            for (int i = 0; i != (len - int(ceil(span))); i++)
            {
                if (arr[i] > arr[i + int(ceil(span))])
                {
                    swap(&arr[i], &arr[i + int(ceil(span))]);
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                break;
            }
            printf("span:%d ", int(ceil(span)));

            printf("pass%d:", count++);

            printArr(arr, len);
            span /= 2;
        }
    }
}