#pragma once   //防止头文件重复包含
#include<iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "empFile.txt"

//职工管理系统类
class WorkerManager
{
public:
	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//标志文件是否为空
	bool m_FileIsEmpty;

	WorkerManager();
	void show_Menu();
	void ExitSystem();
	void Add_Emp();
	void save();
	int get_EmpNum();
	void init_Emp();
	void Show_Emp(); 
	void Del_Emp();
	int isExist(int id);
	void Mod_Emp();   
	void Find_Emp();
	void Sort_Emp();
	void CleanFile();
	~WorkerManager();
};