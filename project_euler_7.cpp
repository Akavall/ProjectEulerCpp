#include <iostream>
#include "isPrime.h"

using namespace::std;

long project_euler_7(int stop);

int main()
{

  long answer = project_euler_7(10001);
  cout << "answer : " << answer << endl;

  return 0;
}

long project_euler_7(int stop)
{
  long counter = 0;
  int prime_counter = 0;
  while (prime_counter < stop)
    {
      counter ++;
      if (isPrime(counter) == true)
	{
	  prime_counter++;
	}
    }
  return counter;
}

