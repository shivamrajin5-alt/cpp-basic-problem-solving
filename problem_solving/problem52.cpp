#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    int count = 0;
    int space=0;
    cout << "enter a string: ";
    getline(cin , n);
    
    while (n[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (n[i] == ' ')
        {
            space++;
        }
        
    }
    cout<<space;

    return 0;
}
