#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    string p;
    
    int count = 0;
    cout << "enter a string: ";
    cin >> n;
    while (n[count] != '\0')
    {
        count++;
    }
    
    for (int i = count -1; i >=0; i--)
    {
        p += n[i];
        
    }
    if (n== p)
    {
        cout<<"palindrome string";

    }
    else
    {
        cout<<"not palindrome string";
    }  
    return 0;
}
