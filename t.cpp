#include <iostream>

using namespace std;

void f() 
{
	cout << "A function f()" << endl;
}

void g()
{
	cout << "A function g()" << endl;
}

int main() 
{
	cout << "Main branch prog!" << endl;
	cout << "The second printed line" << endl;
	cout << "The third line in the main branch" << endl;

	f();
	g();
	
	return 0;
}

