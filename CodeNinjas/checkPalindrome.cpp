#include <iostream>
#include <string>
#include <vector>
using std::vector;
int solution(vector<int> inputArray) {
    int peak = 0;
    int j = 0;
    int size = inputArray.size();
    for (int i = 0; i<size; i+=3) {
        int temp = inputArray[j] * inputArray[j+1];
        
        if (peak < temp) 
            peak = temp;  
        j += 3;       
    }
    return peak;
}
int main() {
    vector<int> inputArray = {3, 6, -2, -5, 7, 3};
    std::cout<<solution(inputArray)<<std::endl;
    return 0;
}