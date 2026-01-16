#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional> 
#include<numeric> 
#include<fstream>
#include"speaker.h"

using namespace std;

//设计演讲管理类
class SpeechManager
{
public:

	vector<int>v1;			//12人
	vector<int>v2;			//6人
	vector<int>vVictory;	//3人
	map<int, Speaker>m_speaker;  //存放编号以及具体的选手 
	int index;   //记录比赛轮数
	bool fileIsEmpty;
	map<int, vector<string>>record;

	SpeechManager();
	//初始化容器和属性
	void initSpeech();
	void createSpeaker();
	void show_Menu();
	void exit_System();
	void startSpeech();
	void speechDraw();
	void speechContest();
	void showScore();
	void saveRecord();
	void loadRecord();
	void showRecord();
	void clearRecord();
	~SpeechManager();
};