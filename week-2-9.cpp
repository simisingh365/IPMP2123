#include "bits/stdc++.h"
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> findTriplets(int n) {
    vector<vector<int>> result;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int c = sqrt(a*a + b*b);
            if (c*c == a*a + b*b && c <= n) {
                result.push_back({a, b, c});
            }
        }
    }
    return result;
}

int main() {
    int n = 20;
    vector<vector<int>> triplets = findTriplets(n);
    for (auto triplet : triplets) {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")" << endl;
    }
    return 0;
}
