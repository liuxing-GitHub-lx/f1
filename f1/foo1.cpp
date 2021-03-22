#include <iostream>
using namespace std;

int sum2(int a, int b)
{
	return 2*a + 2 * b;
}

int main()
{
	cout << "this is foo1.cpp" << endl;

	cout << "the function sum2 result is " << sum2(12 + 2) << endl;

	return 0;
}