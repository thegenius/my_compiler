#include <iostream>
using namespace std;

int main()
{

	initiate();
	configure();
	scan();
	parse();
	gimplify();
	ssa();
	optimize();
	generate_IR();
	generate_Code();
}
