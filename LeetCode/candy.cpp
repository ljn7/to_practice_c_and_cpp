#include <iostream>

int candy(int ratings[]) {
    int size = 5;
    int output = size;
    
    if (size == 1)
        return output;
    
    if (ratings[0] > ratings[1])
        output++;
    for (int i = 1; i < size - 1; i++) {
        if (ratings[i] > ratings[i-1])
            output++;
        else if (ratings[i] > ratings[i+1])
            output++;
    }
    
    if (ratings[size - 1] > ratings[size - 2])
        output++;
    
    return output;
}
int main () {
    int input[] = {1, 3, 2, 2, 1};

    int result = candy(input);
    std::cout << result << std::endl;

    return EXIT_SUCCESS;
}