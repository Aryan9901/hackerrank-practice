/*
You will be given an array of  integers and you have to print the integers in the reverse order.

Input Format

The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

Constraints


, where  is the  integer in the array.

Output Format

Print the  integers of the array in the reverse order, space-separated on a single line.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = n - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (j >= 0)
    {
        cout << arr[j] << " ";
        j--;
    }
    return 0;
}
