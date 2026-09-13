#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    int count = 0;
    int digit=0;
    cout << "enter a string: ";
    cin >> n;
    while (n[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            digit++;
        }
        
    }
    cout<<digit;

    return 0;
}
