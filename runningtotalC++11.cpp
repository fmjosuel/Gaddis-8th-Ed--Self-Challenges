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

