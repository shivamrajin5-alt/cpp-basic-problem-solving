#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if (n>0)
    {
      cout<<"positive number"<<endl;
    }
    else if (n<0)
    {
        cout<<"negative number"<<endl;

    }
    else
    {
     cout<<"zero";
    }

    return 0;
}