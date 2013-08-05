#include <iostream>
#include "isPrime.h"

/*
Yes, I could use sieve for this, but
the following only lakes a few seconds
*/

using namespace::std;

long projectEuler10(long limit);

int main()
{
  long input = 2000000;
  long answer = projectEuler10(input);
  cout << "answer : " << answer << endl;
  return 0;
}

long projectEuler10(long limit)
{
  long answer = 0;
  for (long i = 0; i < limit; i++)
    {
      if (isPrime(i) == true)
	{
	  answer += i;
	}
    }
  return answer;
}
