#include <iostream>
#include<ctime>
#include "speechManager.h"
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int choice = 0;
    while (true)
    {
        SpeechManager SM;
        SM.show_Menu();
        cout << "输入您的选择" << endl;
        cin >> choice;

        switch (choice)
        {
            case 0:
                SM.exit_System();
                break;
            case 1:
                SM.startSpeech();
                break;
            case 2:
                SM.showRecord();
                break;
            case 3:
                SM.clearRecord();
                break;
            defaul:
                system("cls");
                break;
        }

    }


    return 0;
}
