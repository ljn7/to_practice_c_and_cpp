#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::vector;
/* int solution(vector<int> statues) {
    int size = statues.size();
    int count = 0, it = 0;
    sort(statues.begin(), statues.end());
        if (size == 1)
            return 0;
        int j=1;
        while (it<size) {
            int temp = statues[j-1], temp2 = statues[j];
            if (statues[j-1] == 0) {
                if ((statues[j] % (statues[j-1]+1)) != 1) {
                    count++;
                    it++;
                }
            }
            else if (statues[j] % statues[j-1] != 1) {
                count++;
                j++;
                it++;
            }
            else if (statues[j] % statues[j-1] == 1) {
                j++;
                it++;
                if ((j+1)==size)
                    return count;
                continue;
                
            } 
            else {
                j++;
                it++;
            }
            if (j>size)
                    break;
            
        }
    return count;
} */
int solution(std::vector<int> a) {
    sort(a.begin(),a.end());
    int b = 0;
    for(int i = 1; i < a.size(); ++i)
        b += a[i]-a[i-1]-1;
    return b;
}

int main() {
    vector<int> inputArray = {4, 5, 6};

    std::cout<<solution(inputArray)<<std::endl;
    return 0;
}
