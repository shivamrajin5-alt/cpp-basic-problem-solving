#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter the number:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }  
    cout<<count;
    return 0;
}