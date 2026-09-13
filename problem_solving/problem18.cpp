#include<iostream>
using namespace std;
int main(){
    int n ;
    int digit;
    int sum = 0;
     cout<<"enter the digit: ";
     cin>>n;
     while (n>0)
     {
        digit = n %10;
        if (digit%2!=0)
        {
            sum = sum + digit;
        }
        n = n/10;
     }
     cout<<sum;
    return 0;
}