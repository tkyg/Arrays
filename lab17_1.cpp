/*
Read the entries of an array of 5 integers from a user. Next, loop through the
array and print the odd numbers and then print the even numbers. Finally, print
the sum of all the numbers entered.
*/

#include <iostream>
using namespace std;

int main()
{
  int nums[5];
  cout << "Enter five numbers: ";
  int count = 0;

  for (int i = 0; i < 5; i++)
  {
    cin >> nums[i];
    count += nums[i];
  }

  cout << "Odd number: ";
  for (int i = 0; i < 5; i++)
  {
    if (nums[i] % 2 != 0)
    {
      cout << nums[i] << " ";
    }
  }
  cout << endl;

  cout << "Even numbers: ";
  for (int i = 0; i < 5; i++)
  {
    if (nums[i] % 2 == 0)
    {
      cout << nums[i] << " ";
    }
  }
  cout << endl;

  cout << "Sum of all numbers: " << count << endl;
  return 0;
}
