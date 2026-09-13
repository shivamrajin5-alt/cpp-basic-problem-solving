#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum = 0;
    cout<<"enter the digit: ";
    cin>>n;
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
    cout<<sum;

    return 0;
}