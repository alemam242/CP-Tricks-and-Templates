// C++ Program to find whether a number is power of two
#include <bits/stdc++.h>
using namespace std;

// Function to check if x is power of 2
bool isPowerOfTwo(int n)
{
   if (n == 0)
      return false;

   return (ceil(log2(n)) == floor(log2(n)));
}
// Another Function to check if x is power of 2
/*
bool isPowerOfTwo (int x)
{
// First x in the below expression is
   //for the case when x is 0
return x && (!(x&(x-1)));
*/
}

int main()
{
   isPowerOfTwo(31) ? cout << "Yes" << endl : cout << "No" << endl;
   isPowerOfTwo(64) ? cout << "Yes" << endl : cout << "No" << endl;

   return 0;
}
