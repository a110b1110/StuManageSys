// �����Ͽ��ļ�������2��-ver1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "Student.h"
#include "Fileinout.h"
#include <fstream>

using namespace std;

int main( void )
{
	Student stu[10];				//�л� ���� 10���� �Է� �� Ŭ���� �迭 ����

	ifstream in;						//���� ����
	in.open("studentclassfile.txt");	//���� �̸��� studentclassfile �Դϴ�.
	FileStudent fstu;					//������ �о� �� Ŭ���� ����

	if (!in.eof()) 	//���� ����
	{
		for (int i = 0; i < 10; ++i) 
		{
			in >> fstu.stuName >> fstu.korean >> fstu.math >> fstu.english;	//������ �� ������ �о� �´�.
			strcpy(stu[i].stuName, fstu.stuName);							//���� student Ŭ������ ����
			stu[i].korean = fstu.korean;
			stu[i].math = fstu.math;
			stu[i].english = fstu.english;
			stu[i].Initialize();			//���� & ��� ���ϱ�
		}
	}
	in.close();	//���� �ݱ�

	for (int i = 0; i < 10; ++i)	//���� ���� ���
	{
		stu[i].Print();
	}

	return 0;
}

