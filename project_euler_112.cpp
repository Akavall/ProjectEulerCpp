#include<iostream>

using namespace::std;

bool isBouncy(int x);
int getAnswer(double cutoff);

int main()
{
  cout <<"I am in project euler 112"<<endl;

  int project_euler_112 = getAnswer(0.99);

  cout <<"answer : " << project_euler_112 << endl;

  return 0;
}

bool isBouncy(int x)
{
  int temp = 0;
  bool increased=false, decreased=false;

  int prev = x % 10;
  x = x / 10;

  while (x > 0)
    {
      temp = x % 10;
      if(temp > prev)
	{
	  increased = true;
	}
      if(temp < prev)
	{
	  decreased = true;
	}
      if (increased == true && decreased == true)
	{
	  return true;
	}
      prev = temp;
      x = x / 10;
    }
  return false;
}

int getAnswer(double cutoff)
{
  double bouncy_count=0, ratio=0;
  int counter=0;
  while(ratio < cutoff)
    {
      counter++;
      if (isBouncy(counter) == true)
	{
	  bouncy_count++;
	}
      ratio = bouncy_count / (double)counter;
      if (counter % 10000 == 0)
	{
	  cout << "working on" << counter <<endl;
	  cout << "ratio" << ratio << endl;
	}
    }
  return counter;
}

