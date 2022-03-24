#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
void insertionSort(int arr[], int);
int main()
{
    int originArr[] = {6, 5, 7, 3, 4};
    insertionSort(originArr, 5);
    system("pause");
    return 0;
}

void insertionSort(int arr[], int len)
{
    int count = 1;
    int j, key = 0;
    for (int i = 1; i != len; i++) // i=1 即第二個index開始
    {
        key = arr[i];
        j = i - 1; // j是i前面那一個
        while ((j >= 0) && (arr[j] > key))
        { // j最小是index =0,從後向前掃描
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("pass%d:", count++);
        for (int k = 0; k < len; k++)
        {
            printf("%d ", arr[k]);
        }
        puts("");
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}