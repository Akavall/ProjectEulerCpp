#include <iostream>
#include <map>

using namespace::std;


class ProjectEuler14
{
public:

  map<int, long> myMap;
  int x = 0;

  ProjectEuler14(int input)
  {
    x = input;
    myMap[1] = 1;
  }

  int getAnswer()
  {
    buildMap(x);
    int max = 0;
    int answer = 0;
    for (int i = 0; i < x; i++)
      {
	if(myMap[i] > max)
	  {
	    max = myMap[i];
	    answer = i;
	  }
      }
    return answer;
  }

  void buildMap(int n)
  {
    for(int i = 1; i<n; i++)
      { 
        int col = collatz(i);
	myMap[i] = col;
      }
  } 

  void buildPrintMap(int n)
  {
    buildMap(n);
    for(int i = 0; i < n; i++)
      { 
	cout << myMap[i] << i << endl;
      }
  }

  long collatz(long x)
  {
    int counter = 0;
    while(true)
      {
	if (myMap.find(x) != myMap.end())
	  {
	    return myMap[x] + counter;
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
  }

};

int main()
{
  ProjectEuler14 PE = ProjectEuler14(1000000);
  
  long answer = PE.getAnswer();
  cout << answer << endl;

  return 0;
}

