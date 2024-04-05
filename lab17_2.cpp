/*
Initialize an integer array of size 10 with random numbers between 1 and 20
(inclusive). Print the array, then loop through the array adding 2 to every number.
Print the updated array.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int digits[10];

  for (int i = 0; i < 10; i++)
  {
    digits[i] = rand() % 20 + 1;
    cout << digits[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < 10; i++)
  {
    digits[i] += 2;
    cout << digits[i] << " ";
  }

  cout << endl;

  return 0;
}