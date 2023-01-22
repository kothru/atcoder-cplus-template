#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  vector<int> a(N);

  // smaller first
  sort(a.begin(), a.end());
  // bigger first
  sort(a.begin(), a.end(), greater<int>());
}
