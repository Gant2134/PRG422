#ifndef Student_HPP
#define Student_HPP
#include <string>


class Student 
{
private:
	std::string m_FirstName = "John";
	std::string m_Lastname = "Doe";
	float* m_grade;


public:
	
	Student(int m);
	void Addgrade(int *c, int m_max, float g);
	~Student(void);



};

























#endif // !Student_HPP

