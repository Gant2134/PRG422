#include "A.hpp"
#include <iostream>;

using namespace std;

A::A() //default constructor
{
	//new is a memory allocation operator
	array = new int[10];
	m_counter = 0;

}
//destructor - places holder to release allocated memory
A::~A()
{
	delete[] array;//DELETE ALL THAT SHIT!!!!
}

void A::AddNumber(int n)
{
	if(m_counter >= 9)
	{
		return;
	}
	array[m_counter] = n;
	m_counter++;
	
}

void A::debug(void) 
{
	cout << "Number of elements = " << m_counter << endl;
	for (int i = 0; i < m_counter; i++) 
	{
		cout << "value at index is = " << array[i] << endl;
	}
 }