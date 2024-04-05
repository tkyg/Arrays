/* Initialize an integer array of size 50 to random numbers between 1 and 100
(inclusive). Print the array, then find the (a) smallest number in the array and (b)
the largest number in that array and print both to the monitor.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

  srand(time(0));
  int digits[50];

  for (int i = 0; i < 50; i++)
  {
    digits[i] = rand() % 100 + 1;
    cout << digits[i] << " ";
  }
  cout << endl;

  int max = digits[0];
  for (int i = 0; i < 50; i++)
  {
    if (digits[i] > max)
      max = digits[i];
  }
  cout << "The largest number in the array is: " << max << endl;

  int min = digits[0];
  for (int i = 0; i < 50; i++)
  {
    if (digits[i] < min)
      min = digits[i];
  }
  cout << "The smallest number in the array is: " << min << endl;

  return 0;
}