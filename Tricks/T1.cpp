#include <bits/stdc++.h>
using namespace std;
int main()
{
   // 1. Checking if the number is even or odd
   //  Use when the number islargest
   int n = 9;
   if (n & 1)
      cout << "ODD" << endl;
   else
      cout << "Even" << endl;

   // 2. Fast Multiplication or Division by 2
   n = n << 1; // Multiply n with 2
   n = n >> 1; // Divide n by 2

   // 3. Inbuild GCD function
   cout << "GCD: " << __gcd(5, 4) << endl;
}