/*For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present 
separated by a space.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   
   int m, num;
   cin >> m;
   vector<int> v;
   for (int i=0; i<m; i++){
       cin >> num;
       v.push_back(num);
   }
   int n, val;
   cin >> n;
   for (int i=0; i<n; i++){
       cin >> val;
       vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
   }
   return 0;
}
