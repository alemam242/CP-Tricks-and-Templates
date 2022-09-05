#include <bits/stdc++.h>
using namespace std;

int main()
{
   // Calculating the number of digits directly
   // Number of digits in N =floor(log10(N)) + 1;
   int n;
   cin >> n;
   int digit = floor(log10(n)) + 1;
   cout << digit << endl;
}