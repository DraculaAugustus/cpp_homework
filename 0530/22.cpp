#include<iostream>
using namespace std;
#include<cstring>

void substr(char *source, int start, int length, char *dest)
{
    for (int i = 0; i < length; i++)
        *(dest + i) = *((source + start) + i);
    *(dest + length + 1) = '\0';
    /* or
    for(int i = start; i < length + start; i++, dest++)
    {
        *dest = start[i];
    }
    *dest = '\0';
    */
}

int main(void)
{
    char source[100] = "abcdEFG1234";
    char target[100];
    int len, index, length;
    len = strlen(source);

    cout << "source[]: ";
    for (int i = 0; i < len; i++)
    {
        cout << *(source + i);
    }
    cout << endl;
    cout << "Please enter start index:" << endl;
    cin >> index;
    cout << "Please enter truncated length:" << endl;
    cin >> length;

    substr(source, index, length, target);
    for (int i = 0; target[i] != '\0'; i++)
    {
        cout << target[i];
    }
    cout << endl;

    return 0;
}