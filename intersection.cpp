#include <bits\stdc++.h>
using namespace std;
vector<int> findArrayIntersection(int* arr1, int n, int* arr2, int m)

{	

  int i = 0, j = 0, size = 0;
  
  if (arr1[n-1] > arr2[m-1])
      size = arr1[n-1];
  else
      size = arr2[m-1];
  
  int arr_bitset[size+1] = {0};

  std::fill_n(arr_bitset, size+1, -1);

	while (i < n && j < m) {
        
    if (arr1[i] > arr2[j])
        j++;

    else if (arr1[i] < arr2[j])
        i++;

    else {
        arr_bitset[arr1[i++]]++;
        j++;
    }
  }

  vector<int> result;
	for (int i = 0; i < n; i++) {

    if (arr_bitset[arr1[i]] != -1) {

      result.push_back(arr1[i]);
      arr_bitset[arr1[i]] = -1;

    }

  }
  return result;
 
}

int main () {
  int arr1[] = {1, 2, 3, 4, 4, 5, 6, 6, 7, 8, 1, 10};
  int arr2[] = {3, 4, 5, 5, 6, 10};


  vector<int> mainResult = findArrayIntersection(arr1, 12, arr2, 6);

  for (int it: mainResult)
    std::cout << it << " ";
}