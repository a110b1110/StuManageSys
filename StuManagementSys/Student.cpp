#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() 
{
	stuName = new char[20];	//�̸�

	int		korean = 0;		//����
	int		math = 0;		//����
	int		english = 0;		//����
	float	avr = 0;		//���
	float	total = 0;	//����
}

Student::~Student() 
{
	delete[] stuName;
}

void Student::Print() 
{			//������ �л� ���� ���
	cout << " �̸� : " << stuName << " ���� : " << korean
		<< "  ���� : " << math << "  ���� : " << english
		<< "  ���� : " << total << "  ��� : " << avr << endl;
}

void Student::Initialize() 
{
	total = (float)(korean + math + english);
	avr = (float)total / 3;
}