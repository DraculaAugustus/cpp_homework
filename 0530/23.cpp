#include<iostream>
using namespace std;

void calcu_Age(int num)
{
    int age = 20;
    for (int i = 1; i < num; i++)
    {
        age += 2;
    }
    cout << "NO." << num << " age is " << age << endl;
}

int main(void)
{
    int num;
    cout << "Please enter the number(1-10):" << endl;
    cin >> num;
    calcu_Age(num);
    return 0;
}