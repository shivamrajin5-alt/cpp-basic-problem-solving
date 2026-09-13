#include<iostream>
using namespace std;
int main(){
    int n ;
    int digit;
    int smallest = 9 ;
    cout<<"enter the digit: ";
    cin>>n;
    while (n!=0)
    {
        digit = n%10;
        if (digit <smallest)
        {
            smallest = digit;
        }
        n = n / 10;
    }
     cout<<smallest;
    return 0;
}