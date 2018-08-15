#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{

const int NUM_WORKERS = 5 ;
vector <int> hours(NUM_WORKERS);
vector <double> payrate(NUM_WORKERS);
int index;

//input data

cout<< "Enter the hours worked by"<<NUM_WORKERS;
cout<<"employees and their hourly rate. /n";
for (index = 0 ; index < NUM_WORKERS; index++)
{
  cout<<"Hours worked by employee # "<<(index +1);
  cout<<" : ";
  cin>>hours[index];
  cout<<"Hourly payrate for employee # ";
  cout<<(index +1)<<" : ";
  cin>>payrate[index];

}
 //display employees gross pay
cout<<"\nHereis the gross pay for each employee : \n";
 cout<<fixed<<showpoint<<setprecision(2);
 for( index = 0 ; index < NUM_WORKERS ;index++)
 {
   double grossPay = hours[index] * payrate[index];
   cout<<"Employee #"<<(index +1);
   cout<<": $"<<grossPay<<endl;

 }

 // Vector formating  =  vector <data type> nameofVector
 //myVector.push_back(value) = adds element to Vector
 //myvector.at(index) or myVector[index] = returns element at specified index number
 //myVector.size() = returns unsigned int equal to the number of elements
 //MyVector.insert(myVector.begin() + integer,new value)
 //MyVector.begin() = read vectors from first element (index 0) = adds elements before specified index number
//myVector.erase(myVector.begin() + integer); removes elements at specified index number
//myVector.clear() = removes all elements from vectors
//myVector.empty(); returns boolean value wether vector is empty.
vector <int> myVector;

myVector.push_back(3);
myVector.push_back(6);
myVector.push_back(9);
myVector.push_back(12);


cout<<"The vector contains:"<<endl;

for( unsigned int i =0 ; i < myVector.size();i++)
{
  cout<< myVector[i] <<" ";
}

myVector.insert(myVector.begin() + 3 ,5);


cout<<"The vector contains:"<<endl;

for( unsigned int i =0 ; i < myVector.size();i++)
{
  cout<< myVector[i] <<" ";
}

myVector.erase(myVector.begin() + 4);

cout<<"The vector contains:"<<endl;

for( unsigned int i =0 ; i < myVector.size();i++)
{
  cout<< myVector[i] <<" ";

}

if (myVector.empty())
{
  cout<<" Is empty";
}
else
{
  cout<<endl<<" its not empty "<< endl;
}

myVector.clear();

if (myVector.empty())
{
  cout<<" Is empty";
}
else
{
  cout<<endl<<" its not empty "<< endl;
}








  return 0;
}
