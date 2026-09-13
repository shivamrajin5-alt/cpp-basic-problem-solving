#include <iostream>
using namespace std;
int main()
{
    cout << "enter the n: ";
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {

        int count = 0;
        int arm_no = 1;
        int digit;
        int sum = 0;
        int temp = j;

        int orginal = temp;
        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        temp = orginal;

        while (temp != 0)
        {
            digit = temp % 10;

            arm_no = 1;

            for (int i = 0; i < count; i++)
            {
                arm_no = arm_no * digit;
            }

            sum = sum + arm_no;

            temp = temp / 10;
        }

        if (sum == j)
        {
            cout << j << endl;
        }
    }

    return 0;
}