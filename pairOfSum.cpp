#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
	int i = 0, j = arr.size() - 1; 
  vector<vector<int>> result;
  sort(arr.begin(), arr.end());
  while (i < j) {
        
    if ((arr[i] + arr[j]) == s) {

      vector<int> temp;
      temp.push_back(arr[i++]);
      temp.push_back(arr[j--]);
      result.push_back(temp);  
    }
      
    else if ((arr[i] + arr[j]) > s)
      j--;
    
    else
      i++;
  }
  
  return result;
}

int main () {

  vector<int> vec = {2,-3,3,3,-2};


  vector<vector<int>> result = pairSum(vec, 5);

  std::vector< std::vector<int> >::const_iterator row; 
  std::vector<int>::const_iterator col; 

  for (row = result.begin(); row != result.end(); row++)
    for (col = row->begin(); col != row->end(); ++col) 
      cout << *col << " ";


}