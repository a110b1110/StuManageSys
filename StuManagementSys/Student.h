#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student 
{
public:
	char*	stuName;		//이름
	int		korean;			//국어
	int		math;			//수학
	int		english;		//영어
	float	avr;			//평균
	float	total;			//총점

public:
	void	Print();		//출력함수
	void	Initialize();	//총점 & 평균 계산 함수

public:
	Student();
	~Student();
};
#endif