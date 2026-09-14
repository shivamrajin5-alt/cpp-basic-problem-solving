#include<iostream>
using namespace std;
int main(){
    int n ;
    int count = 0;
    cout<<"enter the digit: ";
    cin>>n;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout<<count;
    
    return 0;
}