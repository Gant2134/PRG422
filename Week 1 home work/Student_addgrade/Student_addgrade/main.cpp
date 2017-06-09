#include <cstdio>
#include <cstring>
#include "Student.hpp"
#include "Vector.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	char c;
	const char* name = "Christopher";
	Student John;
	
	for( int i = 0; i < 30; i++ )
	{
		John.Addgrade( i * 10 );
    }
	John.debug();

	


	scanf("%c", &c);
	return 0;
}