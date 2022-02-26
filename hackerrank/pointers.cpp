/*
    Function Description

Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.


Input Format

Input will contain two integers,  and , separated by a newline.

Sample Input

4
5
Sample Output

9
1
Explanation

a'=5 + 4 = 9
b'=5 - 4 = 1
*/
#include <iostream>
using namespace std;
void change(int &a, int &b)
{
    int temp = a;
    a = a + b;
    if (temp > b)
    {
        b = temp - b;
    }
    else
    {
        b = b - temp;
    }
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int *pa = &a, *pb = &b;
    change(a, b);
    cout << a << "\n"
         << b;

    return 0;
}