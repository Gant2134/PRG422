#ifndef STRING_HPP
#define STRING_HPP


#include "Vector.hpp"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class String : Vector <char>
{
public:
	


	String(const char* c_str) :Vector<char>()
	{
		size_t Size= strlen(c_str);
		for (size_t i = 0; i < Size; i++)
		{
			AddElement(c_str[i]);
		}
	}

	int FindFirstOccurence(char c)
	{
		int result = -1;
		for (count_t i = 0; i < m_counter; i++)
		{
			if (m_buffer[i] == c)
			{
				result = i;
				break;
			}
		}
		m_occure = result;
		return result;
	}

	void debug2()
	{
		FindFirstOccurence('s');
		cout << "first occurence of variable is at " << m_occure << endl;


	}
	

	String(): Vector<char>()
	{
		



	}

	~String()
	{

	}

};
#endif // 

