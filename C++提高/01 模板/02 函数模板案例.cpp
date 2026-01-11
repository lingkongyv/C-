#include<iostream>
using namespace std;
#include<string>

//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择排序
//测试 char 数组 ，int 数组

template<class T>
void mySwap(T&a ,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

//选择排序  
template <class T>
void mysort(T arr[], int len)
{
	//从大到小排序
	for (int i = 0; i < len; i++)
	{
		int max = i; //认定最大值的下标
		for (int j = i + 1; j < len; j++)
		{
			//认定的最大值比遍历的最大值下标要小
			if (arr[max] < arr[j])
			{
				max = j;  //更新最大值下标
			}
		}
		if (max != i)
		{
			//交换max和i下标的元素
			mySwap(arr[max], arr[i]);
		}
	}
}

//打印数组的模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main2()
{
	//测试char数组
	char charArr[] = "akshdoiu";
	int len = strlen(charArr); // 只计算有效字符长度，不包括'\0'
	mysort(charArr, len);
	printArray(charArr, len);

	//测试int数组
	int intArr[] = { 1,5,3,7,2,9,4,8,6 };
	int len2 = sizeof(intArr) / sizeof(int);
	mysort(intArr, len2);
	printArray(intArr, len2);

	system("pause");
	return 0;
}