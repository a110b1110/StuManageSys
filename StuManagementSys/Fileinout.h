#pragma once
#ifndef  __FILEINOUT_H__
#define	 __FILEINOUT_H__

class FileStudent {
public:
	char*	stuName = new char[20];	//�̸�
	int		korean;					//����
	int		math;					//����
	int		english;				//����
	float	avr;					//���
	float	total;					//����

public:
	void	CallByFile();
//	inline Student CallByStudent(Student & _stu) { return & _stu; }

public:
			FileStudent();
			~FileStudent();
};


#endif // ! __FILEINOUT_H__
