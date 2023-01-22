#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> A = {1, 2, 3};
  int last = A.size() - 1;

  int N;
  cin >> N;

  vector<int> A(N);
  // input:1
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  // input:2
  for (auto &a : A)
  {
    cin >> a;
  }

  // output
  for (auto a : A)
  {
    cout << a << endl;
  }
}
