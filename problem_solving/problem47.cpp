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
    
    for (int i = count -1; i >=0; i--)
    {
        cout<<n[i];
    }
    
    return 0;
}
