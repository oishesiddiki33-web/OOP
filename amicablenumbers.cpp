
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int sum1 = 0, sum2 = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum1 += i;
        }
    }

    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            sum2 += i;
        }
    }

    if (sum1 == b && sum2 == a)
    {
        cout << a << " and " << b
             << " are Amicable Numbers." << endl;
    }
    else
    {
        cout << a << " and " << b
             << " are not Amicable Numbers." << endl;
    }

    return 0;
}
