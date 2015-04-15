/*
PART A
12. Grade Book
A teacher has five students who have taken four tests. The teacher uses the following
grading scale to assign a letter grade to a student, based on the average of his or her
four test scores.
Test Score Letter Grade
90–100 A
80–89 B
70–79 C
60–69 D
0–59 F
Write a program that uses an array of string objects to hold the five student names,
an array of five characters to hold the five students’ letter grades, and five arrays of
four double s to hold each student’s set of test scores.
The program should allow the user to enter each student’s name and his or her four
test scores. It should then calculate and display each student’s average test score and a
letter grade based on the average.
Input Validation: Do not accept test scores less than 0 or greater than 100.

PART B
13. Grade Book Modification
Modify the grade book application in Programming Challenge 13 so it drops each student’s
lowest score when determining the test score averages and letter grades.
*/

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
