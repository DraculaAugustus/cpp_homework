#include<iostream>
using namespace std;

void show(const char *ptr, int n = 2)
{
    for (int i = 0; i < n; i++)
    {
        cout << ptr << endl;
    }
}

int main(void)
{
    show("Hello,C++");
    cout << "-------------" << endl;
    show("Hello,C++", 4);
    return 0;
}