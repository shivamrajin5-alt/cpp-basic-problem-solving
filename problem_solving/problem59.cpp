#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n, p;

    cout << "Enter the string: ";
    getline(cin, n);

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != ' ')
        {
            p += n[i];
        }
    }

    cout << p;

    return 0;
}