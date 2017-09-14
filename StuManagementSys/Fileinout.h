#pragma once
#ifndef  __FILEINOUT_H__
#define	 __FILEINOUT_H__

class FileStudent {
public:
	char*	stuName = new char[20];	//이름
	int		korean;					//국어
	int		math;					//수학
	int		english;				//영어
	float	avr;					//평균
	float	total;					//총점

public:
	void	CallByFile();
//	inline Student CallByStudent(Student & _stu) { return & _stu; }

public:
			FileStudent();
			~FileStudent();
};


#endif // ! __FILEINOUT_H__
