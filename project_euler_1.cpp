#include<iostream>

using namespace::std;

int projectEuler_1();

int main()
{
  cout << "Project Euler 1 : " << projectEuler_1() << endl;
  return 0;
}

int projectEuler_1()
{
  int answer = 0;
  for(int i = 1; i < 1000; i++)
    {
      if(( i % 3 == 0) || (i % 5 == 0))
	{
	  answer += i;
	}
    }
  return answer;
}


