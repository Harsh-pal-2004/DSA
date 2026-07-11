// ---------------------------
// C++ PRACTICE NOTES
// ---------------------------

// This header includes almost all standard libraries in one go.
// It's handy for competitive programming, but in real projects
// you should include only what you need.
#include <bits/stdc++.h>
using namespace std;

// ---------------------------
// FUNCTIONS
// ---------------------------

// Example of a function that takes two integers and returns their sum.
int sum(int a, int b)
{
  int add = a + b; // perform addition
  return add;      // return result
}

// ---------------------------
// MAIN FUNCTION
// ---------------------------

int main()
{
  // Example: using our sum function
  int a = 8;
  int b = 9;
  int res = sum(a, b); // call the function
  cout << res << endl; // print result → 17

  return 0;
}

// ---------------------------
// PRACTICE SNIPPETS
// ---------------------------

// 1. INPUT/OUTPUT WITH STRINGS
// string name;
// cout << "Enter a name" << endl;
// cin >> name;              // reads single word
// cout << "Hello " << name << endl;

// 2. MULTIPLE INPUTS
// int x, y;
// cout << "Enter one number" << endl;
// cin >> x;
// cout << "Enter 2nd number" << endl;
// cin >> y;
// cout << "You entered " << x << " and " << y << endl;

// 3. READING FULL LINE
// string str;
// getline(cin, str);        // reads entire line including spaces
// cout << str << endl;
// cout << str.length() << endl;   // length of string

// 4. CHARACTER INPUT
// char ch;
// cin >> ch;
// cout << ch << endl;

// 5. IF-ELSE CONDITIONS
// int age;
// cin >> age;
// if (age >= 18) {
//     cout << "You are an adult" << endl;
// } else {
//     cout << "You are not an adult" << endl;
// }

// Shortcut using ternary operator:
// cout << (age >= 18 ? "You are an adult" : "You are not an adult") << endl;

// 6. GRADING SYSTEM
// int marks;
// cin >> marks;
// if (marks <= 25) cout << "F" << endl;
// else if (marks <= 44) cout << "E" << endl;
// else if (marks <= 49) cout << "D" << endl;
// else if (marks <= 59) cout << "C" << endl;
// else if (marks <= 79) cout << "B" << endl;
// else if (marks <= 100) cout << "A" << endl;
// else cout << "Invalid marks" << endl;

// 7. JOB ELIGIBILITY
// int age;
// cin >> age;
// if (age < 18) cout << "Not eligible for job" << endl;
// else if (age >= 18 && age < 55) cout << "Eligible for job" << endl;
// else if (age <= 57) cout << "Eligible but retirement is near" << endl;
// else cout << "Retirement age" << endl;

// 8. SWITCH CASE (Days of Week)
// int day;
// cin >> day;
// switch (day) {
// case 1: cout << "Monday" << endl; break;
// case 2: cout << "Tuesday" << endl; break;
// case 3: cout << "Wednesday" << endl; break;
// case 4: cout << "Thursday" << endl; break;
// case 5: cout << "Friday" << endl; break;
// case 6: cout << "Saturday" << endl; break;
// case 7: cout << "Sunday" << endl; break;
// default: cout << "Invalid day" << endl;
// }

// 9. ARRAYS
// int arr[] = {1, 2, 3, 4, 5};
// cout << arr[0] << endl;   // prints first element

// 10. LOOPS
// for (int i = 0; i <= 100; i++) {
//     cout << i << " ";
// }

// ---------------------------
// PASS BY VALUE vs PASS BY REFERENCE
// ---------------------------

// PASS BY VALUE:
// A copy of the variable is passed into the function.
// Changes inside the function DO NOT affect the original variable.
void passByValue(int x)
{
  x = x + 10; // modifies only the local copy
  cout << "Inside passByValue: " << x << endl;
}

// PASS BY REFERENCE:
// The actual variable (memory address) is passed.
// Changes inside the function DO affect the original variable.
void passByReference(int &y)
{
  y = y + 10; // modifies the original variable
  cout << "Inside passByReference: " << y << endl;
}

int main()
{
  int num1 = 5;
  int num2 = 5;

  passByValue(num1);
  cout << "After passByValue, num1 = " << num1 << endl; // still 5

  passByReference(num2);
  cout << "After passByReference, num2 = " << num2 << endl; // now 15

  return 0;
}

// ---------------------------
// IMPORTANT NOTE:
// ---------------------------
// - Arrays in C++ are ALWAYS passed by reference (decay into pointers).
//   Example: void func(int arr[]) → modifies original array.
// - Vectors (std::vector) are also passed by reference if you use &.
//   Example: void func(vector<int>& v) → modifies original vector.
// - If you pass a vector WITHOUT &, it is passed by value (copied).
//   Example: void func(vector<int> v) → works on a copy, original unchanged.
// - Same applies to other STL containers (map, set, etc.).
