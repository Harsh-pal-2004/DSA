#include <bits/stdc++.h>
using namespace std;

// count number of digits in a number
int countDigits(int n)
{
  if (n == 0)
    return 1; // special case
  return (int)(log10(n) + 1);
}

// reverse a number
int rev(int n)
{
  int revNum = 0;
  while (n > 0)
  {
    int lastdig = n % 10;
    n /= 10;
    revNum = (revNum * 10) + lastdig;
  }
  return revNum;
}

// check if a number is palindrome
bool pal(int n)
{
  return n == rev(n);
}

// Armstrong number
bool arm(int n)
{
  int dup = n;
  int cnt = countDigits(n);
  int sum = 0;
  while (n > 0)
  {
    int LD = n % 10;
    n /= 10;
    sum += floor(pow(LD, cnt));
  }
  return sum == dup;
}

// print all divisions
void divi(int n)
{
  vector<int> ls;
  // for (int i = 1; i <= sqrt(n); i++)
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ls.push_back(i);
      if ((n / i) != i)
      {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());

  for (auto it : ls)
  {
    cout << it << " ";
  }
}

// int num = 1;
// while (num <= n)
// {
//   if (n % num == 0)
//   {
//     cout << num << ", ";
//   }
//   num++;
// }

// prime number
bool isprime(int n)
{
  if (n < 2)
  {
    return false;
  }
  else
  {
    for (int i = 2; i <= floor(sqrt(n)); i++)
    {
      if (n % i == 0)
      {
        return false;
      }
    }
  }
  return true;
}

// gcd hcf
int gcd(int a, int b)
{
  //   int gcd = 1;
  //   if (a == 0 || b == 0)
  //   {
  //     return 0;
  //   }
  //   for (int i = min(a, b); i >= 1; i--)
  //   {
  //     if (a % i == 0 && b % i == 0)
  //     {
  //       gcd = i;
  //       break;
  //     }
  //   }
  //   return gcd;

  // Euclid's algorithm
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }
  if (a == 0)
    return b;
  else
  {
    return a;
  }
}

int main()
{
  int n = 180;
  int b = 140;
  cout << "Digits: " << countDigits(n) << endl;
  cout << "Reverse: " << rev(n) << endl;

  cout << (pal(n) ? "Palindrome" : "Not Palindrome") << endl;
  cout << (arm(n) ? "Armstrong" : "Not Armstrong") << endl;
  divi(n);
  isprime(n) ? cout << "\nPrime" : cout << "\nNot Prime";
  cout << endl
       << gcd(n, b) << endl;
  return 0;
}
