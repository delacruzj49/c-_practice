#include<iostream>
#include<vector>
using namespace std;

//function declaration
void fillVector(vector<int>&);
//fillVector
//&param vector < int>& - the vector to be filled

void PrintVector(const vector<int>&);
//print vector

int main()
{

vector <int> myVector;

fillVector(myVector);
PrintVector(myVector);



















  return 0;
}

void fillVector(vector<int>& newMyVector)
{
  cout<<" Type In a list of numbers and (-1 top stop) : ";
  int input;
  cin>> input;

  while (input != -1)
  {
    newMyVector.push_back(input);
    cin>>input;
  }
}

void PrintVector (const vector<int>& newMyVector)
{
  cout<<"Vector :";
  for (unsigned int i = 0 ; i < newMyVector.size();i++)
  {
    cout<<newMyVector[i]<<" "<<endl;
  }
}
