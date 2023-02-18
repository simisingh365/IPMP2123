#include "bits/stdc++.h"
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findQuadruplets(int arr[], int n, int sum) {
    vector<vector<int>> result;
    sort(arr, arr + n);
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                int quadruplet_sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (quadruplet_sum == sum) {
                    result.push_back({arr[i], arr[j], arr[k], arr[l]});
                    k++;
                    l--;
                } else if (quadruplet_sum < sum) {
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 20;
    vector<vector<int>> quadruplets = findQuadruplets(arr, n, sum);
    for (auto quadruplet : quadruplets) {
        cout << "(" << quadruplet[0] << ", " << quadruplet[1] << ", " << quadruplet[2] << ", " << quadruplet[3] << ")" << endl;
    }
    return 0;
}

