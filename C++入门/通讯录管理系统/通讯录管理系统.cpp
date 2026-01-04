#include<iostream>
using namespace std;
#include<string>
#define Max 1000

struct Person {
	string name;
	int sex;
	int age;
	string phone;
	string adr;
};
struct Addressbooks {
	Person p[Max];
	int size;
};

void showMenu();
void add_person(Addressbooks * abs);
void show_person(Addressbooks* abs);
void del_person(Addressbooks* abs);
int is_exit(Addressbooks* abs, string name);
void find_person(Addressbooks* abs);
void modify_person(Addressbooks* abs);
void clear_person(Addressbooks* abs);

int main()
{
	Addressbooks abs;
	abs.size = 0;

	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		case 1:
			add_person(&abs);
			break;
		case 2:
			show_person(&abs);
			break;
		case 3:
			del_person(&abs);
			break;
		case 4:
			find_person(&abs);
			break;
		case 5:
			modify_person(&abs);
			break;
		case 6:
			clear_person(&abs);
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
} 
void showMenu()
{
	cout << "==============================" << endl;
	cout << "======= 1.添加联系人 ========" << endl;
	cout << "======= 2.显示联系人 ========" << endl;
	cout << "======= 3.删除联系人 ========" << endl;
	cout << "======= 4.查找联系人 ========" << endl;
	cout << "======= 5.修改联系人 ========" << endl;
	cout << "======= 6.清空信息   ========" << endl;
	cout << "======= 0.退出系统   ========" << endl;
	cout << "==============================" << endl; 
}
void add_person(Addressbooks* abs)
{
	if (abs->size == Max)
	{
		cout << "通讯录已满，无法添加" << endl;
		return ;
	}
	else
	{
		string name;
		cout << "输入姓名：" << endl;
		cin >> name;
		abs->p[abs->size].name= name;
		
		int sex = 0;
		cout << "输入性别：" << endl;
		cout << "1：男" << endl;
		cout << "2：女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->p[abs->size].sex = sex;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}

		int age = 0;
		cout << "输入年龄：" << endl;
		cin >> age;
		abs->p[abs->size].age = age;

		string phone;
		cout << "输入电话：" << endl;
		cin >> phone;
		abs->p[abs->size].phone = phone;

		string adr;
		cout << "输入住址：" << endl;
		cin >> adr;
		abs->p[abs->size].adr = adr;

		(abs->size)++;
		cout << "添加成功" << endl;

		system("pause");  //按任意键继续
		system("cls");  //清屏
	}
}
void show_person(Addressbooks* abs)
{
	if (abs->size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名：" << abs->p[i].name << endl;
			cout << "性别：" << (abs->p[i].sex == 1 ? "男" : "女") << endl;
			cout << "年龄：" << abs->p[i].age << endl;
			cout << "电话：" << abs->p[i].phone << endl;
			cout << "住址：" << abs->p[i].adr << endl;
		}
	}
	system("pause");
	system("cls");
}
void del_person(Addressbooks* abs)
{
	cout << "请输入删除联系人姓名：" << endl;
	string name;
	cin >> name;

	int ret = is_exit(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->size-1; i++)
		{
			abs->p[i] = abs->p[i + 1];
		}
		abs->size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
int is_exit(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (name == abs->p[i].name)
		{
			return i;
		}
	}
	return -1;
}
void find_person(Addressbooks* abs)
{
	cout << "请输入要查找的联系人姓名：" << endl;
	string name;
	cin >> name;

	int ret = is_exit(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->p[ret].name << endl;
		cout << "性别：" << (abs->p[ret].sex == 1 ? "男" : "女") << endl;
		cout << "年龄：" << abs->p[ret].age << endl;
		cout << "电话：" << abs->p[ret].phone << endl;
		cout << "住址：" << abs->p[ret].adr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void modify_person(Addressbooks* abs)
{
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;

	int ret = is_exit(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "输入姓名：" << endl;
		cin >> name;
		abs->p[ret].name = name;

		int sex = 0;
		cout << "输入性别：" << endl;
		cout << "1：男" << endl;
		cout << "2：女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->p[ret].sex = sex;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}

		int age = 0;
		cout << "输入年龄：" << endl;
		cin >> age;
		abs->p[ret].age = age;

		string phone;
		cout << "输入电话：" << endl;
		cin >> phone;
		abs->p[ret].phone = phone;

		string adr;
		cout << "输入住址：" << endl;
		cin >> adr;
		abs->p[ret].adr = adr;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void clear_person(Addressbooks* abs)
{
	abs->size = 0;
	cout << "通讯录已经清空" << endl;
	system("pause");
	system("cls");
}