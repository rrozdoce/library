#include <bits/stdc++.h>

using namespace std;

// O(n)

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int best = 0, sum = 0;
  for(int k = 0; k < n; k++)
  {
    sum = max(array[k], sum+array[k]);
    best = max(best, sum);
  }

  cout << best << "\n";
  return;
}