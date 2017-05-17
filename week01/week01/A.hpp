#ifndef CLASS_A
#define CLASS_A
class A 
{
public:
	A() //default constructor
	{
		//new is a memory allocation operator
		array = new int[10];
	
	}
	//destructor - places holder to release allocated memory
	~A()
	{
		delete[] array;//DELETE ALL THAT SHIT!!!!
	}

private:
	//The notiation <TYPE*> means we are declaring the pointer to a variable of type int
	int* array;

};
#endif

