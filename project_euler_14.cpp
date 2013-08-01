#include <iostream>
#include <map>

using namespace::std;

class ProjectEuler14;
/*
{
public:
  ProjectEuler14(int x);
  collatz(long x);
}
*/

int main()
{
  ProjectEuler14 PE;
  PE = ProjectEuler(20);
  long test = PE.collatz(10);

  cout << test << endl;

  return 0;
}

class ProjectEuler14
{
public:
  ProjectEuler14(int x)
  {
    this.x = x;
    map<int, long> myMap;
    this->myMap[1] = 1;
  }

  long collatz(long x)
  {
    int counter = 0;
    while( x != 1)
      {
	if (this->myMap.find(x) != this->myMap.end())
	  {
	    return this->myMap[x] + counter;
	  }
	else
	  {
	    if (x % 2 == 0)
	      {
		x = x / 2;
	      }
	    else
	      {
		x = x * 3 + 1;
	      }
	  }
	counter++;
      }

};
