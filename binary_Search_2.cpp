#include<iostream>
#include<string>
using namespace std;

const int NUM_PRODS = 9;
const int MIN_PRODNUM = 914;
const int MAX_PRODNUM = 922;

int getProdNum();
int Product_Search(const int [],int,int);
void Display_product(const int [] , int, int);

int main()
{
//Ramainder of the program goes here
}

int getProdNum()
{
  int product;
  cout<<" Enter The Product Number to find Pricing Information"<<endl;
  cin>>product;
  while(product >= MIN_PRODNUM && product <= MAX_PRODNUM)
  {
    return product;
  }
  else
  {
    cout<<"Error : Please Enter A valid Product Number";
  }

}

int Product_Search(const int array[],int NUM_PRODS , int item)
{
  int first = 0;
  int last = (NUM_PRODS -1);
  int middle;
  int postion = -1;
  bool found = false;

  while(!found && first <= last)
  {
    middle = (first +last) / 2;
    if (array[middle] == item)
    {
      found = true;
      position = middle;
    }
    else if (array[middle] > item)
    {
       last = middle - 1;
    }
    else
    {
      first = middle +1;
    }
  }
  return postion;
}

void Display_product(const int title[] , const string desc[], const double price,int item);

{
  cout<<"Title: "<<title[item]<<endl;
  cout<<"Description: "<<desc[item]<<endl;
  cout<<"Price : $"<<price[item]<<endl;
}
