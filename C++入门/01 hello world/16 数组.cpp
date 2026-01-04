#include<iostream>
using namespace std;

// 引用传递
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main16()
{
    int arr[11] = { 2,24,75,11,34,57,1,676,3 };

    //cout << sizeof(arr) << endl;
    //cout << (int)arr << endl;
    //cout << (int)&arr[0] << endl;   // &取地址
    //cout << (int)&arr[1] << endl;

    // 在C++中，数组没有length成员，应该使用sizeof(arr) / sizeof(arr[0])来获取数组长度。
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "排序前的数组: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "--------------------------------" << endl;

    // 冒泡
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        int swapCount = 0;  // 统计本轮交换次数

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])  
            {
                Swap(arr[j], arr[j + 1]);
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

    cout << "最终排序结果: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}

