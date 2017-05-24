#ifndef CLASS_A
#define CLASS_A
class A 
{
public:
	A();
	~A();
	void AddNumber(int n);
	int m_counter;
	void debug(void);
private:
	//The notiation <TYPE*> means we are declaring the pointer to a variable of type int
	int* array;

};
#endif

