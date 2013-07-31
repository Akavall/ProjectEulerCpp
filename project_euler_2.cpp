#include <iostream>

using namespace::std;

int projectEuler_2(int top);

int main()
{
  int a = projectEuler_2(4000000);
  cout << "project euler : " << a << endl;
  return 0;
}

int projectEuler_2(int top)
{
  int prev = 1;
  int current = 1;
  int temp = 0;
  int answer = 0;
  while (current < top)
    {
      temp = current;
      current = current + prev;;
      prev = temp;
      if (current % 2 == 0)
	{
	  answer += current;
	}
    }
  return answer;
}
