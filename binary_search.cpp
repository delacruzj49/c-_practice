#include <iostream>
using namespace std;


int BinarySearch(const int [] , int , int);
const int SIZE = 20;

int main()
{
  int idNums[SIZE] = {101,142,147,189,199,207,222,234,289,296,310,319,388,394,417,429,447,521,536,600};

int result;
int empID;

cout<<"Enter an employee Id you wish to search for : ";
cin >>empID;

result = BinarySearch(idNums , SIZE , empID);

if (result == -1 )
 {
   cout<<" That Number does not exist in the array"<<endl;
 }

else
 {
   cout<<"That Id is a found at element "<<result<< " in the array"<<endl;

 }








  return 0;
}

int BinarySearch ( const int array[],int numElements, int value)
{
  int first = 0;
  int last = numElements - 1;
  int middle;
  int position = -1 ;
  bool found = false;

  while(!found && first <= last)
  {
    middle = (first + last) / 2;
    if( array[middle] == value)
    {
      found = true;
      position = middle;
    }
    else if( array[middle]>value)
    {
      last = middle -1;
    }
    else
    {
      first = middle +1;
    }

  }
return position;
}
