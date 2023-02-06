#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

    
    int main(){
int i,a,b;
cin>>a>>b;

string nums[11] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};

for (i=a; i<=b; i++){
    if (i>9 && i%2==0)
    {
        cout<<nums[9]<<endl;
    }
    else if (i>9 && i%2!=0)
    {
            cout<<nums[10]<<endl;
    }
    else{
        cout<<nums[i-1]<<endl;
    }
}  
    return 0;
}
