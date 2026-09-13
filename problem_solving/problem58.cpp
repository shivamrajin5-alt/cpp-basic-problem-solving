#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int count = 0;

    cout << "Enter the string: ";
    cin >> n;

    while (n[count] != '\0')
    {
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        int frequency = 0;

        for (int j = 0; j < count; j++)
        {
            if (n[i] == n[j])
            {
                frequency++;
            }
        }

        if (frequency == 1)
        {
            cout << "First non-repeating character: " << n[i];
            break;
        }
    }

    return 0;
}