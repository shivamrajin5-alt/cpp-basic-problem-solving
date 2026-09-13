#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout << "enter the number: ";
    cin >> n;
    while(n!=0){
        n = n/10;
        if (n%2==0)
        {
           count++;
        }
        else
        {
           continue;
        }
        
    }
    cout<<count;
    return 0;
}