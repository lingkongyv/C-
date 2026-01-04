#include<iostream>
using namespace std;


int main12()
{
	/*
	int score = 730;
	if (1>0) {
		cout << "1>0" << endl;
		if (score > 600)
		{
			cout << "ÉÏÒ»±¾" << endl;
		}
	}
	else if (0) {
		cout << "0" << endl;
	}
	else {
		cout << "else" << endl;
	}
	*/

	
	//int a, b, c;
	//cin >> a >> b >> c;
	//cout << ((a > b) ? (a > c ? a : c) : (b > c ? b : c)) << endl;

	int score=0;
	cin >> score;
	switch (score) {
		case 6:
		cout << "A" << endl;
		break;
		case 9:
		cout << "A+" << endl;
		break;
	}
	

	system("pause");
	return 0;
}