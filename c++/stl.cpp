#include <bits/stdc++.h>
using namespace std;

// STL Notes
// - Algorithms
// - Containers
// - Functions
// - Iterators

// Pair Notes
void explainPair()
{
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;

  pair<int, pair<int, int>> q = {1, {2, 3}};
  cout << q.first << " " << q.second.second << " " << q.second.first << endl;

  pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
  cout << arr[1].second << endl; // prints 5
}

// Vector Notes
void explainVector()
{
  // Note: basic insertion
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);

  // Note: vector of pairs
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);

  // Note: different ways to initialize
  vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
  vector<int> v2(5);      // {0, 0, 0, 0, 0}
  vector<int> v3(5, 20);  // {20, 20, 20, 20, 20}
  vector<int> v4(v3);     // copy of v3

  // Note: iterators
  vector<int>::iterator it = v1.begin();
  it++;
  cout << *it << " "; // prints 100

  it = it + 2;
  cout << *it << " "; // prints 100

  cout << v1[0] << " " << v1.at(0) << " ";
  cout << v1.back() << " ";

  // Note: loop with iterator
  for (vector<int>::iterator iter = v1.begin(); iter != v1.end(); iter++)
  {
    cout << *iter << " ";
  }
  cout << endl;

  // Note: loop with auto
  for (auto iter = v1.begin(); iter != v1.end(); iter++)
  {
    cout << *iter << " ";
  }
  cout << endl;

  // Note: range-based loop
  for (auto value : v)
  {
    cout << value << " ";
  }
  cout << endl;

  // Note: reverse iteration
  for (vector<int>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); rit++)
  {
    cout << *rit << " ";
  }
  cout << endl;

  // Note: erase examples
  vector<int> v5 = {10, 20, 12, 23, 35};
  v5.erase(v5.begin() + 1);                 // removes 20
  v5.erase(v5.begin() + 2, v5.begin() + 4); // removes {23, 35}
  // result: {10, 12}
  for (auto val : v5)
  {
    cout << val << " ";
  }
  cout << endl;

  // Note: insert examples
  vector<int> v6(2, 100);            // {100, 100}
  v6.insert(v6.begin(), 300);        // {300, 100, 100}
  v6.insert(v6.begin() + 1, 2, 100); // {300, 100, 100, 100, 100}

  vector<int> copy(2, 50); // {50, 50}
  v6.insert(v6.begin(), copy.begin(), copy.end());
  // {50, 50, 300, 100, 100, 100, 100}

  cout << v6.size() << endl; // prints size

  v6.pop_back(); // removes last element

  // Note: swap
  v1.swap(v2); // v1 -> {0,0,0,0,0}, v2 -> {100,100,100,100,100}

  v6.clear();                 // clears entire vector
  cout << v6.empty() << endl; // prints 1 (true)
}

// List Notes
void explainList()
{
  list<int> ls;

  ls.push_back(2);     // {2}
  ls.emplace_back(4);  // {2, 4}
  ls.push_front(5);    // {5, 2, 4}
  ls.emplace_front(1); // {1, 5, 2, 4}

  // Note: rest of the functions are the same as vector:
  // begin, end, rbegin, rend, clear, insert, size, swap
}

// Deque Notes
void explainDeque()
{
  deque<int> dq;

  dq.push_back(10);    // {10}
  dq.emplace_back(20); // {10, 20}
  dq.push_front(5);    // {5, 10, 20}
  dq.emplace_front(1); // {1, 5, 10, 20}

  dq.pop_back();  // removes last -> {1, 5, 10}
  dq.pop_front(); // removes first -> {5, 10}

  cout << dq.back() << endl;
  cout << dq.front() << endl;

  // Note: similar functions as vector and list
}

// Stack Notes
void expStack()
{
  // Note: stack follows LIFO (Last In, First Out)
  stack<int> st;

  // Note: push elements into stack
  st.push(1); // stack: {1}
  st.push(2); // stack: {1, 2}
  st.push(3); // stack: {1, 2, 3}
  st.push(3); // stack: {1, 2, 3, 3}
  st.push(5); // stack: {1, 2, 3, 3, 5}

  // Note: access top element
  cout << st.top() << endl; // prints 5

  // Note: remove top element
  st.pop(); // removes 5 -> stack: {1, 2, 3, 3}

  // Note: access new top
  cout << st.top() << endl; // prints 3

  // Note: size of stack
  cout << st.size() << endl; // prints 4

  // Note: check if empty
  cout << st.empty() << endl; // prints 0 (false)

  // Note: swap two stacks
  stack<int> st1, st2;
  st1.swap(st2); // contents of st1 and st2 are exchanged
}

// Queue Notes
void expQueue()
{
  queue<int> q;
  q.push(1);    // {1}
  q.push(2);    // {1, 2}
  q.emplace(4); // {1, 2, 4}

  q.back() += 5;

  cout << q.back() << endl; // prints 9
  // q is {1, 2, 9}
  cout << q.front() << endl; // prints 1

  q.pop(); // {2, 9}

  cout << q.front() << endl; // prints 2

  // Note: size, swap, empty are the same as stack
}

// Priority Queue Notes
void expPQ()
{
  priority_queue<int> pq;

  pq.push(5);     // {5}
  pq.push(2);     // {5, 2}
  pq.push(8);     // {8, 5, 2}
  pq.emplace(10); // {10, 8, 5, 2}

  cout << pq.top() << endl; // prints 10

  pq.pop(); // {8, 5, 2}

  cout << pq.top() << endl; // prints 8

  // Note: minimum heap
  priority_queue<int, vector<int>, greater<int>> minHeap;
  minHeap.push(5);     // {5}
  minHeap.push(2);     // {2, 5}
  minHeap.push(8);     // {2, 5, 8}
  minHeap.emplace(10); // {2, 5, 8, 10}

  cout << minHeap.top() << endl; // prints 2
}

// Set Notes
void expSet()
{
  set<int> st;
  st.insert(1);  // {1}
  st.emplace(2); // {1, 2}
  st.insert(4);  // {1, 2, 4}
  st.insert(3);  // {1, 2, 3, 4}

  // Note: insert in a set keeps elements sorted and unique
  // Note: begin(), end(), rbegin(), rend(), size()
  // Note: empty() and swap() work like the other containers

  auto foundThree = st.find(3);
  if (foundThree != st.end())
  {
    cout << *foundThree << endl;
  }

  auto missingValue = st.find(6);
  if (missingValue == st.end())
  {
    cout << "not found" << endl;
  }

  st.erase(4); // erases 4 in logarithmic time

  int countOne = st.count(1);
  cout << countOne << endl;

  auto eraseIt = st.find(3);
  if (eraseIt != st.end())
  {
    st.erase(eraseIt); // constant time for iterator erase
  }

  st.insert(2);
  st.insert(4);

  auto rangeStart = st.find(2);
  auto rangeEnd = st.find(4);
  if (rangeStart != st.end() && rangeEnd != st.end())
  {
    st.erase(rangeStart, rangeEnd); // erase [first, last)
  }

  // Note: lower_bound() and upper_bound() work the same way as in vector
  auto lower = st.lower_bound(2);
  auto upper = st.upper_bound(3);
  (void)lower;
  (void)upper;
}

// Multiset Notes
void explainMultiSet()
{
  multiset<int> ms;
  ms.insert(1); // {1}
  ms.insert(1); // {1, 1}
  ms.insert(1); // {1, 1, 1}

  ms.erase(1); // removes all 1's

  int countOne = ms.count(1);
  cout << countOne << endl;

  ms.insert(1);
  ms.insert(1);

  // Note: erase only one occurrence
  auto firstOne = ms.find(1);
  if (firstOne != ms.end())
  {
    ms.erase(firstOne);
  }

  // Note: rest of the functions are the same as set
}

// Unordered Set Notes
void expUset()
{
  unordered_set<int> st;
  st.insert(1);
  st.insert(2);
  st.insert(3);

  // Note: lower_bound and upper_bound do not work here
  // Note: elements are not stored in any particular order
  // Note: complexity is usually better than set, except when collisions happen
}

// Map Notes
void expMap()
{
  map<int, int> mpp;

  mpp[1] = 2;
  mpp.emplace(3, 1);
  mpp.insert({2, 4});

  // Note: map stores key-value pairs in sorted key order
  for (auto entry : mpp)
  {
    cout << entry.first << " " << entry.second << endl;
  }

  cout << mpp[1] << endl;
  cout << mpp[5] << endl; // Note: creates key 5 with default value

  auto found = mpp.find(3);
  if (found != mpp.end())
  {
    cout << found->second << endl;
  }

  auto lower = mpp.lower_bound(2);
  auto upper = mpp.upper_bound(3);
  (void)lower;
  (void)upper;

  // Note: erase, swap, size, and empty work like the other ordered containers
}

// Multimap Notes
void expmultimap()
{
  multimap<int, int> mpp;
  mpp.insert({1, 10});
  mpp.insert({1, 20});
  mpp.insert({2, 30});

  // Note: same as map, but it can store duplicate keys
  // Note: operator[] cannot be used here
}

// Custom Comparator Notes
bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
  {
    return true;
  }
  if (p1.second == p2.second && p1.first > p2.first)
  {
    return true;
  }
  return false;
}

// Extra Algorithm Notes
void explainExtra()
{
  int a[] = {5, 1, 4, 2, 3};
  int n = sizeof(a) / sizeof(a[0]);

  sort(a, a + n);

  vector<int> v = {5, 1, 4, 2, 3};
  sort(v.begin(), v.end()); // for vector

  sort(a + 2, a + 4);

  sort(a, a + n, greater<int>());

  pair<int, int> pairs[] = {{1, 2}, {2, 1}, {4, 1}};
  // Note: sort by second element
  // Note: if second is same, sort by first in descending order
  sort(pairs, pairs + 3, comp);

  int num = 7;
  int bitCount = __builtin_popcount(num);

  long long bigNum = 165786578687LL;
  int bitCountLong = __builtin_popcountll(bigNum);

  string s = "123";
  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  int maxi = *max_element(a, a + n);
  cout << bitCount << " " << bitCountLong << " " << maxi << endl;
}

// Main
int main()
{
  explainPair();
  explainVector();
  explainList();
  explainDeque();
  expStack();
  expQueue();
  expPQ();
  expSet();
  explainMultiSet();
  expUset();
  expMap();
  expmultimap();
  explainExtra();
  return 0;
}
