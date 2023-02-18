#include "bits/stdc++.h"
#include <algorithm>
#include <vector>
using namespace std;

vector<int> nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i+1]) {
        i--;
    }
    if (i < 0) {
        return {-1};
    }
    int j = n - 1;
    while (j >= 0 && nums[j] <= nums[i]) {
        j--;
    }
    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> nextPerm = nextPermutation(nums);
    if (nextPerm[0] == -1) {
        cout << "No higher permutation exists" << endl;
    } else {
        cout << "The next higher permutation is: ";
        for (int num : nextPerm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}