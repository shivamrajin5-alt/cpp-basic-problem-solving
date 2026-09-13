#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n , p;
    int count = 0;
    
    cout << "enter a string: ";
    getline(cin , n);
    
    while (n[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (n[i] >= 'a' && n[i] <= 'z')
        {
            p += n[i] - 32;
        }
        
    }
    cout<<p;

    return 0;
}
