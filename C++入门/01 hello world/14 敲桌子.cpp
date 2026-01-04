#include<iostream>
using namespace std;

int main14()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i/10 ==7)
		{
			count++;
			cout << i << "\t";
			if (count % 5 == 0)
				cout << endl;
		}
	}
	cout << "ÇÃ×À×Ó" << endl;
	system("pause");
	return 0;
}