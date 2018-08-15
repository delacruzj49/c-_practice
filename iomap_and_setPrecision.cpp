#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double day1,day2,day3,total;

  cout<<"Enter the sales for day 1 :";
  cin>>day1;
  cout<<"Enter the sales for day 2 :";
  cin>>day2;
  cout<<"Enter the sales for day 3 :";
  cin>>day3;

  total = day1+day2+day3;

  cout<<"\n sales amount \n";
  cout<<"---------------\n";
  cout<<setprecision(6);
  cout<<"Day 1 :"<<setw(8)<<day1<<endl;
  cout<<"Day 2 :"<<setw(8)<<day2<<endl;
  cout<<"Day 3 :"<<setw(8)<<day3<<endl;
  cout<<"Total :"<<setw(8)<<total<<endl;

  /** What i learned:

  in order to fix the way things are dsplayed you can use
  #include <iomanip>

  setprecision() : set Precision is good to work with double date types. It was sure that the
  right amount of floating points are used and displayed. It also adds zeros if
  needed using  <<showpoint<<

  left and right  : using this can help numbers display left and right justified

  Setw() :helps predetermine a spot at in which you want data to be displayed

  **/




  return 0;

}
