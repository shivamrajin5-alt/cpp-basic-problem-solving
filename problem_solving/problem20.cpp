#include<iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int count =0;
     cout<<"enter the digit: ";
     cin>>n;
     while (n>0)
     {
        digit=n%10;
        if (digit==0)
        {
            count++;
        }
        n = n/10;
     }
     cout<<count;
     
     return 0 ;
}