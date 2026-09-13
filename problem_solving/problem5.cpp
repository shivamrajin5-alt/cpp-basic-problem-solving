#include<iostream>
using namespace std;
int main(){
    int rev = 0;
    int original_no;
    int digit;
    
    cout<<"enter the integer: ";
    cin>>original_no;
    int original = original_no;
    
    while(original_no!=0){
     digit = original_no %10;
        rev = rev *10 + digit;
        original_no = original_no/10;
    }
    if (original == rev)
    {
        cout<<"palindrome number";
    }
    else
    {
       cout<<"not palindrome number";
    }
    
    return 0;
}