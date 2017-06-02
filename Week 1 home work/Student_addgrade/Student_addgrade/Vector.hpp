#pragma once
typedef unsigned long int count_t;

template <typename T> class Vector
{
public:
	Vector(void)
	{
		m_counter = 0;
		m_capacity = 10;
		m_buffer = new T [m_capacity];
		
	}


	virtual ~Vector(void)
	{
		delete[] m_buffer;
	}

	void AddElement(T elm)
	{

		m_buffer[m_counter] = elm;
		m_counter++;


		if (m_counter == m_capacity) 
		{
			ExtendArray<T>(&m_buffer, m_capacity, m_capacity +10);
			m_capacity = m_capacity + 10;
		}
	}

	void debug(void)
	{
		for (count_t i = 0; i < m_counter; i++)
		{
			cout << m_buffer[i] << endl;
		}
	}

protected:
	count_t		m_capacity;
	count_t		m_counter;
	T*			m_buffer;

};