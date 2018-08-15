#include <iostream>
using namespace std;

int area (int, int);

int main ()
{
int length;
int width;
int total ;
// This will calculate the area of any rectangle.
cout<<"Enter the lenght "<<endl;
cin>>length;
cout<<"Enter the Width"<<endl;
cin>>width;

total = area(length,width);

cout<<"the area is"<<total<<endl;










  return 0;

}



int area(int x, int y)
{

int rec_area;
rec_area = x * y;

return rec_area;
}
