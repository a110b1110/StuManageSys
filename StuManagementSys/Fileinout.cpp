#include <fstream>
#include "Fileinout.h"


FileStudent::FileStudent()
{
	char*	stuName = new char[20];		//�̸�
	int		korean = 0;					//����
	int		math = 0;					//����
	int		english = 0;				//����
}

FileStudent::~FileStudent()
{
	delete[] stuName;
}

void FileStudent::CallByFile()
{

}
