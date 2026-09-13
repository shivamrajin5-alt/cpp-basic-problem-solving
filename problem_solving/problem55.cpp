#include<iostream>
using namespace std;
int main(){
    
    string n ;
    char t;
    int count =0;
    int frequency = 0;

    cout <<"enter the string: "<<endl;
    getline(cin , n);

    cout<<"enter the character: ";
    cin>>t;

     while (n[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (n[i]== t)
        {
            frequency++;
        }
        
    }
    cout<<frequency;
    
    return 0;
}