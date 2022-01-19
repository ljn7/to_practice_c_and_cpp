#include <bits/stdc++.h>
int findDuplicate(std::vector<int> &arr) 
{	
    int size = arr.size(), result = 0;
    for (int i = 0; i < size; i++) {
      result = result ^ (arr[i]);

    }
    return result;
}
int main () {
    std::vector<int> something = {4, 3, 5, 5, 8, 3, 4}; 
    std::cout << findDuplicate(something) << std::endl;
    std::cin.get();
    }
	
