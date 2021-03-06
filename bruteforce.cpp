#include <iostream>
#include <cmath>
using namespace std;

int counter(int num)
{
	int len = 0;
	while (num >= 1)
	{
		num /= 10;
		len += 1;
	}
	return len;
}


int reverse(int num)
{
	int sum, len = counter(num) - 1;
	float b;
	while (len >= 0)
	{
		b = pow(10.0, len);
		sum += (num % 10) * b;
		num = num - (num % 10);
		num /= 10;
		len -= 1;
	}
	return sum;
}
bool palindrome(int num)
{
	if (num == reverse(num))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int input;
	cout << "Your number: ";
	cin >> input;
	cout << "Number length: " << counter(input) << endl;
	cout << "Reversed number: " << reverse(input) << endl;
	cout << "Is it palindrome? (0 = no, 1 = yes) - " << palindrome(input);
}
