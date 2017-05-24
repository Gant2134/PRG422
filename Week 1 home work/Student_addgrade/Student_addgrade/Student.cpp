#include "Student.hpp"
#include <iostream>


Student::Student() 
{
	
	m_max = 10;
	m_grade = new float[m_max];
	m_capacity = 0;
	
}

Student::~Student()
{
	delete[] m_grade;
}


