#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student 
{
public:
	char*	stuName;		//�̸�
	int		korean;			//����
	int		math;			//����
	int		english;		//����
	float	avr;			//���
	float	total;			//����

public:
	void	Print();		//����Լ�
	void	Initialize();	//���� & ��� ��� �Լ�

public:
	Student();
	~Student();
};
#endif