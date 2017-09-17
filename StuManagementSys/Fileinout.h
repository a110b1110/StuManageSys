#pragma once
#ifndef  __FILEINOUT_H__
#define	 __FILEINOUT_H__
#include "Student.h"
class FileStudent : public Student
{
public:
	void	CallByFile();
//	inline Student CallByStudent(Student & _stu) { return & _stu; }

public:
			FileStudent();
			~FileStudent();
};


#endif // ! __FILEINOUT_H__
