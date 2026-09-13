#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    string b;
    int count = 0;
    int count2 = 0;
    cout<<"enter the first string: "<<endl;
    cin>>a;
    cout<<"enter the second string: ";
    cin>>b;
    while (a[count] != '\0')
    {
        count++;
    }
    while (b[count2] != '\0')
    {
        count2++;
    }
    if (count == count2)
    {
        bool anagram = true;

        for (int i = 0; i < count; i++)
        {
            int ca = 0;
            int cb = 0;

            // a[i] ko first string mein count karo
            for (int j = 0; j < count; j++)
            {
                if (a[i] == a[j])
                {
                    ca++;
                }
            }

            // a[i] ko second string mein count karo
            for (int j = 0; j < count2; j++)
            {
                if (a[i] == b[j])
                {
                    cb++;
                }
            }

            if (ca != cb)
            {
                anagram = false;
                break;
            }
        }

        if (anagram)
        {
            cout << "It's anagram";
        }
        else
        {
            cout << "It's not anagram";
        }
    }
    else
    {
        cout << "It's not anagram";
    }

    return 0;
}

