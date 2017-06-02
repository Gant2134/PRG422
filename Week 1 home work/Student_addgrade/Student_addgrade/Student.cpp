#include "Student.hpp"
#include <iostream>
#include "ExtendArrayTemplate.hpp"
#include "Vector.hpp"

using namespace std;



Student::Student()
{


	
	std::string m_FirstName;
	std::string m_Lastname;
	Vector<int> m_grade;
	
	
	
	
	
}







void Student::Addgrade(int c)
{
	m_grade.AddElement(c);
}



void Student::debug()
{
	m_grade.debug();
}


Student::~Student()
{
	
}


