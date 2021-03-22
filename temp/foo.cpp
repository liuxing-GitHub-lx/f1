#include <iosteam>
using namespace std;
int sum1(int a, int b)
{
<<<<<<< HEAD
	return a + b*3;
=======
	return a + b*2;
>>>>>>> dev
}
int main()
{

	cout << "hello world!" << endl;

	cout << "the function result is " << sum1(12, 3) << endl;

	return 0;
}