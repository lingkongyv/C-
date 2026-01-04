#include<iostream>
using namespace std;

int main17()
{
    int a[3][3] = { {82,48,25},{56,41,38},{36,12,51} };
    string name[3] = { "江","王","张" };
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
            cout << a[i][j] << "\t";
        }
        cout << name[i] <<"的总分：" << sum << endl;
    }
    system("pause");
    return 0;
}

