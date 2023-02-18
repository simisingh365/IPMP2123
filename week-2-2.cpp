#include "bits/stdc++.h"
using namespace std;

int findOdd(int arr[], int n) {
    int res = 0;
    for(int i=0;i<n;i++) {
        res = res ^ arr[i];
    }
    return res;
}

int main() {
    int arr[] = {1,2,3,2,3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The number occurring odd number of times is " << findOdd(arr, n) << endl;
    return 0;
}
