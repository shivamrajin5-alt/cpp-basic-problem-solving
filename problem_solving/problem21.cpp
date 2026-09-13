#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    int arm_no = 1;
    int digit;
    int sum = 0;

    cout << "enter the digit: ";
    cin >> n;
    int orginal = n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    n = orginal;

    while (n != 0)
    {
        digit = n % 10;

        arm_no = 1;

        for (int i = 0; i < count; i++)
        {
            arm_no = arm_no * digit;
        }

        sum = sum + arm_no;

        n = n / 10;
    }
    if (sum == orginal)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }

    return 0;
}