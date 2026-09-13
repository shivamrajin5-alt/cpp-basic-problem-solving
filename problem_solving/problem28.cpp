#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int GCD;
    
    cout<<"enter the number:";
    cin>>a;
    cout<<"\nenter the second number: ";
    cin>>b;
    for (int i = 1; i <=a ; i++)
    {
        if (a%i==0 && b%i==0)
        {
            GCD = i;
        }
        
    }  
    cout<<GCD;
    
    return 0;
}