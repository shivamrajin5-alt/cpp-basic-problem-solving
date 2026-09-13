#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n; 
    for (int j = 1; j <=n; j++)
    {
       
    int sum = 0;
    int orginal = j;
    for (int i = 1; i < j; i++)
    {
        if (j%i==0)
        {
            sum = sum +i;
        }
        
    }

    if (sum==orginal)
    {
        cout<<j<<endl;
    }
}
     
    return 0;
}