#include <iostream>
using namespace std;

void decision (int grade1,int grade2,int grade3);
double semester_avegrage (int grade1,int grade2,int grade3);

int main ()
 {
   //This program will determine the highest grade of the 3 quizzes taken
   int grade1,grade2,grade3;
   cout<<"We are going to find the highest to lowest grades"<<endl;
   cout<<"Enter the 3 test scores from the school year"<<endl;
   cin>>grade1;
   cin>>grade2;
   cin>>grade3;

   decision(grade1,grade2,grade3);

   return 0;
 }

 void decision (int grade1 , int grade2 , int grade3)
 {
  if (grade1 > grade2 && grade1 > grade3)
    {
     cout<<"The highest grade is "<<grade1 <<endl;
    }
  else if (grade2 > grade1 && grade2> grade3)
    {
      cout<<" The highest grade is "<<grade2<<endl;
    }
  else
    {
      cout<< " The highet grade is "<<grade3<<endl;
    }
 }
