#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter the number: ";
    cin>>n; 
    int orginal = n;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum = sum +i;
        }
        
    }
    if (sum==orginal)
    {
        cout<<"perfect number";
    }
    else
    {
        cout<<"not a perfect number";
    }
    
    
    
    return 0;
}