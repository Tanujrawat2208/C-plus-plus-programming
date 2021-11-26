#include <iostream>
using namespace std;

int main()
{
	char ch = 'A';
	
	int a = 1456000;
	short b = 95;
	long c = 123456789;
	
	float d = 10.568f;
	double e = 15556.5556669;
	long double f = 102568955.4644335L;
	
	bool g = true;
	
	cout << "Size of Character: \t" << sizeof(char) << "\t" << sizeof(ch) << endl;
	
	cout << "Size of Integer: \t" << sizeof(int) << "\t" << sizeof(a) << endl;
	cout << "Size of Short Integer: \t" << sizeof(short) << "\t" << sizeof(b) << endl;
	cout << "Size of Long Integer: \t" << sizeof(long) << "\t" << sizeof(c) << endl;
	
	cout << "Size of Floating Point: " << sizeof(float) << "\t" << sizeof(d) << endl;
	cout << "Size of Double: \t" << sizeof(double) << "\t" << sizeof(e) << endl;
	cout << "Size of Long Double: \t" << sizeof(long double) << "\t" << sizeof(f) << endl;
	
	cout << "Size of Boolean: \t" << sizeof(bool) << "\t" << sizeof(g) << endl;
	
	return 0;
}
