#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    /* Method 1: Using Brute force
    if(num%2==0)
    {
        cout<<"Even number";
    }
    else
    {
        cout<<"Odd number";
    }
    */

   /* Method 2: Using Bitwise Operators
   if(num & 1 )// n & 1 is 1, then odd, else even
   {
       cout<<"Odd number";
   }
   else{
       cout<<"Even number";
   }
   */

//   Method 3 : Using Ternary Operator
  num % 2 == 0 ? cout << "Even":cout << "Odd";

    return 0;
}