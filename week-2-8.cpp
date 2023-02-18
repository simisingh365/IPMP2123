#include "bits/stdc++.h"
#include <unordered_map>
#include <vector>
using namespace std;

pair<int, int> findPair(vector<int> arr, int X) {
    unordered_map<int, int> umap;
    for (int i = 0; i < arr.size(); i++) {
        int diff = X - arr[i];
        if (umap.find(diff) != umap.end()) {
            return make_pair(arr[i], diff);
        } else {
            umap[arr[i]] = i;
        }
    }
    return make_pair(-1, -1);
}

int main() {
    vector<int> arr = {1, 4, 6, 8, 10};
    int X = 14;
    pair<int, int> result = findPair(arr, X);
    if (result.first == -1 && result.second == -1) {
        cout << "No pair found with sum " << X << endl;
    } else {
        cout << "Pair found: " << result.first << " " << result.second << endl;
    }
    return 0;
}



