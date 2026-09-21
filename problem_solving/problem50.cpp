#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    int count = 0;
    int consonant = 0;
    
    cout << "enter a string: ";
    cin >> n;
    while (n[count] != '\0')
    {
         count++;
    }
        for (int i = 0; i < count; i++)
        {
            if (n[i] != 'a' && n[i] != 'e' && n[i]!='i' && n[i] != 'o' && n[i] != 'u' )
            {
                consonant++;
            }
            
        }
        
    
    cout << "lenght is: " << count<<" and consonant is "<< consonant ;
    
    return 0;
}
//50th file
