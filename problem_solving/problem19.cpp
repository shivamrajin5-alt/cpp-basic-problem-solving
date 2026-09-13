#include<iostream>
using namespace std;
int main(){
    int n;
    int special;
    int digit;
    int count =0;
     cout<<"enter the digit: ";
     cin>>n;
     cout<<"\nenter the specific frequency: ";
     cin>>special;
     while (n>0)
     {
        digit = n%10;
        if (digit==special)
        {
           count++;
        }
        n = n/10;
        
     }
     cout<<count;

    return 0;
}
