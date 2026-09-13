#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "enter the number: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            count++;
        }
    }
    if (count == 0)
    {
        cout << "prime number";
    }
    else
    {
        cout << "not prime";
    }

    return 0;
}