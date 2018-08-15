#include <iostream>
using namespace std;

int main ()
{
  //make a calculator that will computer the amount of numbers the
  //user wants to calculate.

  int num_num;
  char operation;

  cout<<" Enter the amount of Numbers that you want to multiply :"<<endl;
  cin>>num_num;

  cout<< " Enter the operation that you want to execute"<<endl;
  cin>>operation;

  double sum = 0;

  if (operation == '+')
  {
    for (int i = 0 ; i <= num_num;i++)
    {
      sum = sum + num_num;
    }
  }
  else if(operation == '-')
  {

  }
  else if(operation =='/')
  {

  }
  else if (operation =='*')
  {

  }
  else
  {
    cout<<" Enter a valid expression"<<endl;
  }



  return 0;

}
