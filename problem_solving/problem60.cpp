#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int count = 0;
    int words = 1;

    cout << "Enter the string: ";
    getline(cin, n);

    while (n[count] != '\0')
    {
        if (n[count] == ' ')
        {
            words++;
        }

        count++;
    }

    cout << "Number of words: " << words;

    return 0;
}