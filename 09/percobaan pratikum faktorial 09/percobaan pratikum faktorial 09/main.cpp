#include <iostream>
using namespace std;
unsigned long long factorial(int n);
int main()
{
	int number;
	cout << "Input: ";
	cin >> number;

	if (number < 0)
	{
		cout << "Invalid input\n";
		return 1;
	}
	unsigned long long result = factorial(number);
	cout << "Factorial of " << number << ": " << result << endl;
	system("pause");
	return 0;
}

unsigned long long factorial(int n)
{
	
	if (n == 0 || n == 1)
		return 1;

	
	return n * factorial(n - 1);
}