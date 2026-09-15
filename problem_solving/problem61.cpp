#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0 && i%5==0)
        {
            cout<<"fizzbuzz"<<endl;;
        }
        else if (i%3==0)
        {
            cout<<"fizz"<<endl;
        }  

        else if (i%5==0)
        {
            cout<<"buzz"<<endl;
        }
        else
        {
            cout<<i<<endl;    
        }
        
    }
    // end of program rest 9 problems further solve in future
    //commit 6
    
    return 0; 

}
