/*
    Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

    += : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
    a += b is equivalent to a = a + b;
    Input Format

    Input will contain four integers -  , one per line.

    Output Format

    Return the greatest of the four integers.
    PS: I/O will be automatically handled.

    Sample Input

    3
    4
    6
    5
    Sample Output
    6
*/

#include <iostream>
using namespace std;
int max(int &a, int &b, int &c, int &d)
{
    if (a > b && a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > c && b > d)
    {
        return b;
    }
    else if (c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int a, b, c, d, e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    e = max(a, b, c, d);
    cout << e;
    return 0;
}