#ifndef Student_HPP
#define Student_HPP
#include <string>
#include "ExtendArrayTemplate.hpp"
#include "Vector.hpp"


class Student 
{
private:
	std::string m_FirstName = "John";
	std::string m_Lastname = "Doe";
	Vector<int> m_grade;
	//float m_score;


	//void ExtendArray <int>(int**prt, int m_capacity, int new_max);

public:
	
	Student();
	void Addgrade(int c);	
	void debug(void);
	~Student(void);
	



};

























#endif // !Student_HPP

