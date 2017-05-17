#include <cstdio>
#include <cstring>
#include "A.hpp" //when including new files ie: hpp and other files of the like use "" not <>.

//_CRT_SECURE_NO_WARNINGS


int main(int argc, char* argv[]) 
{
	A a;//creating an object of type A
	printf("Hello world\r\n");
	char c;

	int myarray[10];

	int size = sizeof(myarray); //sizeof is telling you the Size of a specific 
	printf("The size of an array is %i", size);

	scanf("%c", &c);



	return 0;


}

