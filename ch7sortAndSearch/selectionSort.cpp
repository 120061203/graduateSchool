#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
void selectionSort(int arr[], int);
void printArr(int arr[], int);
int main()
{
    int originArr[] = {5, 7, 6, 4, 3};
    selectionSort(originArr, 5);
    return 0;
}

void selectionSort(int arr[], int len)
{
    int count = 1;
    int min = 0;
    for (int i = 0; i != len - 1; i++)
    {
        min = i;
        for (int j = i + 1; j != len; j++)
            if (arr[j] < arr[min])
            {
                min = j;
            }
        if (i != min)
        {
            swap(&arr[i], &arr[min]);
        }

        printf("pass%d:", count++);

        printArr(arr, 5);
    }
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