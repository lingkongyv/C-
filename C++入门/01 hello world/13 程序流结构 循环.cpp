#include<iostream>
using namespace std;


int main13()
{
	int a = 4;
	while (1)
	{
		cout << "Hello World!" << endl;
		a--;
		if (1 > a)
		{
			break;
		}
	}

	do {
		cout << "adc" << endl;
		a++;
	} while (a < 2);

	for (int i = 0; i <= a; i++)
	{
		cout << "c" << endl;
	}

	for (int i = 0; i < a+1; i++)
	{

		for (int j = 0; j < a+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}