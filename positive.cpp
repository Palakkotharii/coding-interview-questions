//  C++ code is to check whether a given integer input is Positive or Negative.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  Method 1 : Using Brute force
    int n;
    cout << "Enter the number :";
    cin >> n;
    // if (n > 0)
    // {
    //     cout << "Positive Number ";
    // }
    // else if( n<0)
    // {
    //     cout << "Negative Number ";
    // }
    // else {
    //     cout<<"Zero";
    // }

    // Method 2 : Using Ternary Operator
    if (n == 0)
        cout << "zero";
    else(n > 0)? cout << "Positive Number": cout << "Negative Number" << endl;
    return 0;
}