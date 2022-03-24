#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SWAP2(x, y, t) ((t)=(a), (a)=(b), (b)=(t))
void swap(int *, int *);
void bubbleSort(int[], int);
int main()
{
    int originArr[] = {5, 7, 6, 4, 3, 8, 9};
    int originArr2[] = {3, 4, 5, 6, 7, 8, 9};
    int originArr3[] = {9, 8, 7, 6, 5, 4, 3};
    int a = 10;
    int b = 20;
    int t=0;
    SWAP2(a, b,t);
    printf("after swap a=%d\n", a);
    printf("after swap b=%d\n", b);

    clock_t start_t, finish_t;
    long double total_t = 0;

    start_t = clock();
    bubbleSort(originArr, 7);
    finish_t = clock();
    double diff = finish_t - start_t; // ms
    printf("random sequence%f  ms\n", diff);

    start_t = clock();
    bubbleSort(originArr2, 7);
    finish_t = clock();
    diff = finish_t - start_t; // ms
    printf("min to max best sequence%f  ms\n", diff);
    start_t = clock();
    bubbleSort(originArr3, 7);
    finish_t = clock();
    diff = finish_t - start_t; // ms
    printf("max to min worst sequence%f  ms\n", diff);



    system("pause");
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
struct temp_value
{
    int a;
    int b;
};
typedef struct temp_value temp_value;
temp_value swap4(int a, int b){
    int temp =a;
    a = b;
    b = temp;
    

    temp_value result;
    result.a =a;
    result.b =b;
    return result;
    // (*temp_value).a
    // temp_value->a
}
void swap3(int &a,int &b){
    int temp =a;
    a=temp;
    temp =b;

}

void bubbleSort(int arr[], int len)
{ //排序arr[1]~arr[n]
    int count = 1;
    for (int i = 1; i <= len - 1; i++)
    {
        int flag = 0; //flag 表示是否swap

        for (int j = 0; j <= len - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return;
        }
        printf("pass%d:", count++);
        for (int k = 0; k < len; k++)
        {

            printf("%d ", arr[k]);
        }
        puts("");
    }
}