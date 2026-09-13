#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    int count = 0;
    cout << "enter a string: ";
    cin >> n;
    while (n[count] != '\0')
    {
        count++;
    }
    cout << "lenght is: " << count;
    return 0;
}
