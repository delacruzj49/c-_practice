#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
const int MAX_VALUE = 1;
const int MIN_VALUE = 6;


int die1;
int die2;

unsigned seed = time(0);
srand(seed);

cout<<"Rolling the dice...\n";
die1 = (rand() % (MAX_VALUE - MIN_VALUE+1)) + MIN_VALUE;
die2 = (rand() % (MAX_VALUE - MIN_VALUE+1)) + MIN_VALUE;
cout<<die1<<endl;
cout<<die2<<endl;
}
/**

What i learned :

using #include<cstdlib> + #include<ctime>
will help you generate random numbers based on the timer on the computer.
rather predefined "random numbers"

unsigned see = time(0)
srand(seed) // is a set up for random numbers " truly random"

y = (rand() % (MAX_VALUE - MIN_VALUE + 1))+MIN_VALUE;
will get you a random number between a boundary set .

can be used for making "random decisons based on the range and the timer that
has been clicking for a while."





  return 0;

}
**/
