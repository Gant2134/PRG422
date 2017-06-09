#ifndef Student_HPP
#define Student_HPP
#include <string>
#include "ExtendArrayTemplate.hpp"
#include "Vector.hpp"


class Student 
{
private:
	int m_id = 0;
	std::string m_FirstName = "John";
	std::string m_Lastname = "Doe";
	Vector<int> m_grade;
	Vector<const char*>m_name;

	public:
	
	Student();
	void Addgrade(int c);
	void Addstring(const char*);
	void debug(void);
	~Student(void);
	



};

























#endif // !Student_HPP

