#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outputFile;
  outputFile.open("demofile.txt");

  cout<<"Now writting data to the file"<<endl;

  outputFile<<"Hey"<<endl;
  outputFile<<"Whats up"<<endl;
  outputFile<<"This is a sample file"<<endl;
  outputFile<<"Did this work?"<<endl;

  outputFile.close();
  cout<<"finished"<<endl;









  return 0;
}
