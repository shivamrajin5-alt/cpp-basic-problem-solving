#include<iostream>
using namespace std;
int main(){
    int n ;
    int digit;
    int largest = 0;
    cout<<"enter the digit: ";
    cin>>n;
    while (n!=0)
    {
        digit = n%10;
        if (digit >largest)
        {
            largest = digit;
        }
        n = n / 10;
    }
     cout<<largest;
    return 0;
}
//ok
