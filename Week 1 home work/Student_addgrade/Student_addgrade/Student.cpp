#include "Student.hpp"
#include <iostream>
#include "ExtendArrayTemplate.hpp"
#include "Vector.hpp"
#include"String.hpp"

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

void Student::Addstring(const char* n)
{
	m_name.AddElement(n);

}




void Student::debug()
{
	m_grade.debug();
}




Student::~Student()
{
	
}


