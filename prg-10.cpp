/* Print the integers in the sorted order one by one in a single line followed by a space.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{

    int n,i;
    cin >> n;
    vector<int> numbers(n, 0);
    for(i = 0; i < n; i++) 
    {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    for(i = 0; i < n; i++) 
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
