#include <bits/stdc++.h>
using namespace std;

// Print name n times using recursion
string recname(string name, int count)
{
  if (count <= 0)
    return "Done";

  recname(name, count - 1);
  cout << "Hello " << name << " " << count << endl;
  return "Done";
}

// Print from 1 to n linearly
int recnum(int n, int i = 1)
{
  if (i > n)
    return 0;

  cout << i << endl;
  recnum(n, i + 1);
  return 0;
}

// Print from n to 1 linearly
int recrevnum(int n)
{
  if (n <= 0)
    return 0;

  cout << n << endl;
  recrevnum(n - 1);
  return 0;
}

// Print from 1 to n using backtracking
int recbacknum(int n, int i = 1)
{
  if (n < i)
    return 0;

  recbacknum(n - 1, i);
  cout << n << endl;
  return 0;
}

// Print from n to 1 using backtracking
int recbackrevnum(int n, int i = 1)
{
  if (i > n)
    return 0;

  recbackrevnum(n, i + 1);
  cout << i << endl;
  return 0;
}

// Summation of first n numbers using recursion
int sum(int n)
{
  if (n < 1)
    return 0;

  return n + sum(n - 1);
}

// Factorial of a number using recursion
int fact(int n)
{
  if (n <= 1)
    return 1;

  return n * fact(n - 1);
}

// Reverse an array using recursion with two pointers
vector<int> revarray(int arr[], int i, int j, int n)
{
  if (i >= j)
    return vector<int>(arr, arr + n);

  swap(arr[i], arr[j]);
  return revarray(arr, i + 1, j - 1, n);
}

// Check if array is palindrome using recursion
bool palindarray(int arr[], int i, int j)
{
  if (i >= j)
    return true;

  if (arr[i] != arr[j])
    return false;

  return palindarray(arr, i + 1, j - 1);
}

// fibonacci series using multiple recursion
int fib(int n)
{
  if (n <= 1)
  {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

// string palindrome using recursion
bool palindstring(string str, int i)
{
  for (i = 0; i < str.length() / 2; i++)
  {
    if (str[i] != str[str.length() - 1 - i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string name = "Meena";
  int a = 6;

  cout << "Sum of first " << a << " numbers: " << sum(a) << endl;
  cout << "Factorial of " << a << ": " << fact(a) << endl;

  int arr[] = {1, 2, 3, 4, 5, 4, 3, 2};
  int size = sizeof(arr) / sizeof(arr[0]);

  // Reverse array
  vector<int> result = revarray(arr, 0, size - 1, size);
  cout << "Reversed array: ";
  for (int x : result)
    cout << x << " ";
  cout << endl;

  // Palindrome check
  bool pal = palindarray(arr, 0, size - 1);
  cout << (pal ? "Palindrome" : "Not a palindrome") << endl;

  // fibonacci series
  vector<int> fib_series;
  for (int i = 0; i <= a; i++)
  {
    fib_series.push_back(fib(i));
  }
  for (int x : fib_series)
  {
    cout << x << " ";
  }

  // Palindrome string check
  bool check = palindstring("madam", 0);
  if (check)
  {
    cout << "Palindrome string";
  }
  else
  {
    cout << "Not a palindrome string";
  }

  return 0;
}
