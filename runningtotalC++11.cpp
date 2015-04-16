// Author: Josuel MF
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

