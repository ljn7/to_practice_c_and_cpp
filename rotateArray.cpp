#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int k;
    cin >> k;
    
    while (k--) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    return 0;
}