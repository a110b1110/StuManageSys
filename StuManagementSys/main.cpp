// 수요일오후성적관리2조-ver1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	Student stu[10];				//학생 정보 10명을 입력 할 클래스 배열 선언

	ifstream in;						//파일 열기
	in.open("studentclassfile.txt");	//파일 이름은 studentclassfile 입니다.
	FileStudent fstu;					//파일을 읽어 올 클래스 선언

	if (!in.eof()) 	//파일 열기
	{
		for (int i = 0; i < 10; ++i) 
		{
			in >> fstu.stuName >> fstu.korean >> fstu.math >> fstu.english;	//파일을 각 변수에 읽어 온다.
			strcpy(stu[i].stuName, fstu.stuName);							//값을 student 클래스에 복사
			stu[i].korean = fstu.korean;
			stu[i].math = fstu.math;
			stu[i].english = fstu.english;
			stu[i].Initialize();			//총점 & 평균 구하기
		}
	}
	in.close();	//파일 닫기

	for (int i = 0; i < 10; ++i)	//파일 내용 출력
	{
		stu[i].Print();
	}

	return 0;
}

