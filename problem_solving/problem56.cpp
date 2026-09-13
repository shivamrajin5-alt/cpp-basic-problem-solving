#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, n);

    while (n[count] != '\0')
    {
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (n[i] == n[j])
            {
                cout << n[i] << " ";
                break;
            }
        }
    }

    return 0;
}