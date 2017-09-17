#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() 
{
	stuName = new char[20];	//이름

	int		korean = 0;		//국어
	int		math = 0;		//수학
	int		english = 0;		//영어
	float	avr = 0;		//평균
	float	total = 0;	//총점
}

Student::~Student() 
{
	delete[] stuName;
}

void Student::Print() 
{			//각각의 학생 정보 출력
	cout << " 이름 : " << stuName << " 국어 : " << korean
		<< "  수학 : " << math << "  영어 : " << english
		<< "  총점 : " << total << "  평균 : " << avr << endl;
}

void Student::Initialize() 
{
	total = (float)(korean + math + english);
	avr = (float)total / 3;
}