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
    for (int i = 1; i <= a; i++)
    {
        cout<<fact(i)<<endl;
    }
    
    return 0;
}