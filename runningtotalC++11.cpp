// Author: Josuel MF
// RANGE BASED FOR LOOP IN C++
// This program uses features of C++ 11 to add up numbers from an array. 
// Note: This cannot be done in C++ 98 and other diverse C++ versions.

#include <iostream>

using namespace std;

int main()
{
   int josuel[] = { 1, 2, 3, 4, 5};
   
   int total = 0;
   
   for (int add : josuel)
   {
       cout << add << endl;
       total += add;
   }
   
   cout << "The total value is: " << total << endl;
   
   return 0;
}

// This program is a slight modification of the previous one.
// Here the user has to enter values to be appended to the array and then added.
// The remarquable difference between the two programs is the ampersand.
// This shows that the "range variable" is accessed by reference (to modify array's content)

#include <iostream>

using namespace std;

int main()
{
   int josuel[5];
   
   int total = 0;
   
   for (int &add : josuel)
   {
       cout << "Enter value for the running total: ";
       cin >> add;
       total += add;
   }
   
   cout << "The total value is: " << total << endl;
   
   return 0;
}

