#include<iostream>
using namespace std;
int main(){
    int n;
    int first;
    int last;
    cout<<"enter the number";
    cin>>n;
    last = n%10;
    while (n>=10)
    {
       n=  n / 10;
       first = n;
    }
    cout<<"the first digit is "<<first<<" and last digit is "<<last; 
    
    return 0;
}