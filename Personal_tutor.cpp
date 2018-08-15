#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{

unsigned seed = time(0);
srand(seed);

int range_min = 100;
int range_max = 900;
int problems , guess, num1,num2,correct_ans;


cout<<" Enter the amount of problems you would like to solve : ";
cin>>problems;

for (int i = 0 ;i <= problems ; i++)
{
  num1 =(rand() %(range_max-range_min+1)+range_min);
  num2 =(rand() %(range_max-range_min+1)+range_min);

  correct_ans = num1+num2;

  cout<<setw(5)<<num1<<endl;
  cout<<setw(5)<<num2<<endl;
  cout<<setw(5)<<"+---"<<endl;

  cout<<"Enter your guess :";
  cin>>guess;

  if (guess == correct_ans)
  {
    cout<<"Your answer is correct"<<endl;
  }
  else
  {
    cout << "Incorrect! The righ answer is :"<< correct_ans<<endl;
  }

}

  return 0;
}
