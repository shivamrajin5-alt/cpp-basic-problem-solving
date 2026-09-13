#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int LCM;
    
    cout<<"enter the number:";
    cin>>a;
    cout<<"\nenter the second number: ";
    cin>>b;
    for (int i = 1; i <=a*b ; i++)
    {
        if (i%a==0 && i%b==0)
        {
            LCM = i;
            break;
        }
        
    }  
    cout<<LCM;
    
    return 0;
}