#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n ;
    cout<<"enter the number: ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        int count =0;
         for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
           count++;
        }
    }
    if (count==0)
    {
       cout<<i<<endl;
    }
    }
    
    return 0;
}