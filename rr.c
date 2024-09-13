#include <stdio.h>

void subSort(int arr[], int start, int end);
    
void quickSort(int arr[], int size)
{
    subSort(arr, 0, size - 1);
}

void subSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int base = arr[start];
        int low = start;
        int high = end + 1;

        while (1)
        {
            while (low < end && arr[++low] <= base)
                ;
            while (high > start && arr[--high] >= base)
                ;

            if (low < high)
            {
                // 交换两个位置元素
                int temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
            else
            {
                break;
            }
        }
        // 交换high和start位置的元素
        int temp1 = arr[start];
        arr[start] = arr[high];
        arr[high] = temp1;
        //继续递归调用
        subSort(arr, start, high - 1);
        subSort(arr, high + 1, end);
    }
}
//打印数组
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[] = {9, -16, 40, 23, -30, -49, 25, 21, 30};
    int length = sizeof(arr) / sizeof(int);

    //排序前遍历数组
    print(arr, length);

    //调用快速排序
    quickSort(arr, length);

    //排序后遍历数组
    print(arr, length);

    getchar();

    return 0;
}
