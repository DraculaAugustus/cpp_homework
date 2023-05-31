#include <iostream>
using namespace std;
bool isPrimer(int num)
{
	if(num == 1)
		return false;
	for (int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main(void)
{
	int num1;
	cout << "Please enter the number(int): " << endl;
	cin >> num1;
	if(isPrimer(num1))
		cout << num1 << " is primer number!" << endl;
	else
		cout << num1 << " isn't primer number!" << endl;
	return 0;
}
