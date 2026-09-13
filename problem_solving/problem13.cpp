#include<iostream>
using namespace std;
int fact(int n){
    int result =1;
    while (n>0)
    {
        
        result = result*n;
        
        n--;
    }
    
  return result;
}
int main(){
    int a;
     cout<<"enter the number: ";
    cin>>a;
    cout << fact(a);
    
    return 0;
}