#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;

    int original = n;
    int last = n % 10;

    int first = n;
    int divisor = 1;

    // First digit aur divisor find karna
    while(first >= 10){
        first = first / 10;
        divisor = divisor * 10;
    }

    // Last digit ko first position par lagana
    n = n - first * divisor;
    n = n - last;

    // First digit ko last position par lagana
    n = n + last * divisor;
    n = n + first;

    cout << "after interchange: " << n;

    return 0;
}