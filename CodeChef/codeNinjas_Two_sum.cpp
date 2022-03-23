#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
    vector<pair<int, int>> result;
    bool flag = true;
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == target) {
                result.push_back(make_pair(arr[i], arr[j]));
                arr.erase(arr.begin() + (j-1));
                n--;
                flag = false;
                break;
            }
    if (flag)
    	result.push_back(make_pair(-1, -1));
        	
    return result;
}

int main () {
  int t; 
  cin >> t;

  while (t--) {
    vector<int> test;
    int n = 0;
    cin >> n;
    int target = 0;
    cin >> target;
    for (int i = 0; i < n; i++) {
      int temp; 
      test.push_back(temp);
    }

    vector<pair<int, int>> res;

    res = twoSum (test, target, n);

    std::cout << "T"; 
    std::cout << "T"; 
    std::cout << "T"; 
    std::cout << "T"; 
    std::cout << "T"; 
    std::cout << "T"; 
    std::cout << "T"; 
    test.clear();
 }

}