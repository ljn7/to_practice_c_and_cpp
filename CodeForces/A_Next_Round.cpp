#include <bits/stdc++.h>

using namespace std;

int main () {
  short int n, k;
  cin >> n >> k;
  int sum = 0;
  int arr[n];
  
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  for (int i = 0; i < n; i++) 
    if (arr[i] >= arr[k-1])
      if (arr[i] > 0)
        sum++;

  cout << sum << endl;

}