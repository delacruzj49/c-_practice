#include <iostream>
using namespace std;

int linearSearch(const int[] , int ,int);





int main ()
{
const int SIZE = 5;
int test[SIZE]= { 87, 45, 100, 22, 82};
int result;

result = linearSearch(test,SIZE,100);

if (result ==-1)
{
cout<<"You did not earn a 100 points on any test /n"<<endl;
}
else
{
  //the result contains the subscript
  //to the first 100 found
cout<<"You earned a 100 on a test"<<endl;
cout<<(result + 1)<<endl;
}

  return 0;
}

int linearSearch (const int array[],int size , int value)
{
  int index = 0; //Used as a subscript to search an array
  int position = -1;
  bool found = false;

while (index < size && !found)
{
  if (array[index]== value)
  {
    found = true;
    position = index;
  }
  index++;

}
return position;
}
