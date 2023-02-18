#include "bits/stdc++.h"
using namespace std;

void findNonRepeating(int arr[], int n, int &num1, int &num2) {
    int xorResult = 0;
    for(int i=0;i<n;i++) {
        xorResult = xorResult ^ arr[i];
    }
    int rightmostSetBit = xorResult & ~(xorResult - 1);
    for(int i=0;i<n;i++) {
        if(arr[i] & rightmostSetBit) {
            num1 = num1 ^ arr[i];
        }
        else {
            num2 = num2 ^ arr[i];
        }
    }
}

int main() {
    int arr[] = {2,4,7,9,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num1 = 0, num2 = 0;
    findNonRepeating(arr, n, num1, num2);
    cout << "The non-repeating elements are " << num1 << " and " << num2 << endl;
    return 0;
}
