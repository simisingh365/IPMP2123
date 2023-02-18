#include "bits/stdc++.h"
using namespace std;

int findMissingNumber(int arr[], int n) {
    int sum = (n*(n+1))/2;
    int arrSum = 0;
    for(int i=0;i<n-1;i++) {
        arrSum += arr[i];
    }
    return sum - arrSum;
}

int main() {
    int arr[] = {1,2,3,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]) + 1;
    int missingNum = findMissingNumber(arr, n);
    cout << "The missing number is " << missingNum << endl;
    return 0;
}