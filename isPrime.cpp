#include <iostream>
#include <cmath>
#include "isPrime.h"

using namespace::std;

bool isPrime(long x)
{
  if((x == 0) || (x == 1))
    {
      return false;
    }
 
  if (x == 2)
    {
      return true;
    }
  if(x % 2 == 0)
    {
      return false;
    }
  else
    {
      double d_lim = sqrt(x);
      int lim = (int) d_lim;;
      for (int i = 3; i < (lim + 2); i += 2)
	{ 
	  if (x % i == 0)
	    {
	      return false;
	    }
	}
    }
  return true;

}

