#include "Student.hpp"
#include <iostream>


Student::Student(int m)
{


	
	std::string m_FirstName;
	std::string m_Lastname;
	m_grade = new float[m];
	
	
}

void Student::Addgrade(int *c,int m, float g)
{
	if (*c >= m- 1)
	{
		return;
	}
	m_grade[*c] = g;
	c++;
}


Student::~Student()
{
	delete[] m_grade;
}


