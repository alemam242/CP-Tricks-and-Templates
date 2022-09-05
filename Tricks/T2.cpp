#include <bits/stdc++.h>
using namespace std;

/// Calculating the most significant digit

int MSD(int n)
{
   if (n == 0)
      return 0;
   int k = log10(n); // number of digits in a number=log10(N)+1
   int x = pow(10, k);
   int ans = n / x; // will be the most significant digit
   return ans;
}

int main()
{
   int n;
   cin >> n;
   cout << MSD(n) << endl;
   return 0;
}
