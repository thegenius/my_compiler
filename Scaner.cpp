#include <iostream>
#include <stdio.h>
using namespace std;


class Scaner{
	public:
		enum Token{ 
			tok_eof = -1;
			tok_def = -2;
			tok_extern = -3;
 		};
	public:
		static int sayHello()
		{printf("%d\n",tok_eof);}
};


int main()
{
	Scaner.sayHello();
	return 0;
}
