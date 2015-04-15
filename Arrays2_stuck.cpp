#include <iostream>

using namespace std;

int main()
{
   const int NUM_STUD = 2;
   const int TESTS = 2;
   const int LETTERS = 5;
   
   char letter[LETTERS] = {'A','B','C','D','F'} ;
   
   // holds test scores of students per row (means row 1 contains test scores
   // for student 1) 
   double grades[NUM_STUD][TESTS];
   
   // holds the names of students
   string names[NUM_STUD];
   
   for (int num = 0; num < NUM_STUD; num++)
   {
       cout << "Enter student's name: ";
       cin >> names[num];
       
       for (int test = 0; test < TESTS; test++)
       {
           cout << "Enter the test score: ";
           cin >> grades[num][test];
       }
   }
   
   
   return 0;
}
