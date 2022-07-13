
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *, int *);
void quickSort(int arr[], int, int);
void printArr(int arr[], int);
int main()
{
    int originArr[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
    int lenth = sizeof(originArr) / sizeof(originArr[0]);
    quickSort(originArr, 0, lenth - 1);
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

        printf("%2d ", arr[k]);
    }
    puts("");
}
int count = 1;
void quickSort(int arr[], int startIndex, int endIndex)
{ //排序arr[startIndex]~arr[endIndex]且假設arr[startIndex]<=arr[endIndex]
    int pivotKey = 0;

    if (startIndex < endIndex)
    {
        pivotKey = arr[startIndex];
        int i = startIndex, j = endIndex + 1;
        while (true)
        {
            while (true)
            {
                i++;
                if (arr[i] >= pivotKey)
                    break;
            }
            while (true)
            {
                j--;
                if (arr[j] <= pivotKey)
                    break;
            }
            if (i < j)
                swap(&arr[i], &arr[j]); //俘虜交換
            if (i >= j)
                break; //直到兩軍交會
        }
        swap(&arr[startIndex], &arr[j]); //立碑
        printf(" pk = %2d ", arr[j]);
        printf("pass%d: ", count++);
        printArr(arr, 10);
        quickSort(arr, startIndex, j - 1); //左邊sort
        quickSort(arr, j + 1, endIndex);   //右邊sort
    }
}