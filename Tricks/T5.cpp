// C++ code to demonstrate working of all_of()
#include <iostream>
#include <algorithm> // for all_of()
using namespace std;
int main()
{
   int a[5] = {0};
   char c[3] = {0};

   iota(a, a + 5, 10);  // a[5] = {10, 11, 12, 13, 14}
   iota(c, c + 3, 'a'); // c[3] = {'a', 'b', 'c'}

   /*
   // are all of the elements positive?
   all_of(first, first + n, ispositive());

   // is there at least one positive element?
   any_of(first, first + n, ispositive());

   // are none of the elements positive?
   none_of(first, first + n, ispositive());
   */

   int ar[6] = {1, 2, 3, 4, 5, -6};

   // Checking if all elements are positive
   all_of(ar, ar + 6, [](int x)
          { return x > 0; })
       ? cout << "All are positive elements\n"
       : cout << "All are not positive elements\n";

   int source[5] = {0, 12, 34, 50, 80};
   int target[5];
   // copy 5 elements from source to target
   copy_n(source, 5, target);
   for (int i = 0; i < 5; i++)
   {
      cout << target[i] << " ";
   }

   return 0;
}
