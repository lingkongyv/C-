#include<iostream>
using namespace std;

//在 C++ 中，函数需要在使用之前进行声明或定义。
void Swap(int* p1, int* p2);
void Sort(int*arr,int n);

int main21()
{
	// 指针和数组
	// 利用指针变量访问数组元素
	int arr[] = { 72,25,13,44,54 };

	int* p = arr; // 指针变量指向数组首元素
	for (int i = 0; i < 5; i++)
	{
		cout << *(p + i) << endl; // 利用指针访问数组元素
	}

	//// 指针和函数
	int a = 2, b = 3;
    Swap(&a, &b);
	cout << a<<"\t" << b << endl;

    int n = sizeof(arr)/sizeof(arr[0]);

	//冒泡
    Sort(arr, n);

	system("pause");
	return 0;
}

void Swap(int* p1, int* p2)
{
    int c = *p1;
    *p1 = *p2;
    *p2 = c;
}

void Sort(int* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        int swapCount = 0;  // 统计本轮交换次数

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
                swapped = true;
                swapCount++;
            }
        }

        cout << "第" << i + 1 << "轮: ";
        if (swapCount > 0)
        {
            cout << "发生了" << swapCount << "次交换，数组变为: ";
        }
        else
        {
            cout << "未发生交换，数组已有序: ";
        }

        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;

        if (!swapped)
        {
            cout << "--------------------------------" << endl;
            cout << "排序完成！" << endl;
            break;
        }
    }

}

