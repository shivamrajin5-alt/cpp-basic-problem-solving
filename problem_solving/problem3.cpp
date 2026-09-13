#include<iostream>
using namespace std;
int main(){
    int n ;
    int mul = 1;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0){
        mul = mul *( n%10);
        n = n/10;
    }
    cout<<mul;

    return 0;
}