#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d)
    {
   int greatest = a;
    if(greatest<b)
        {
        greatest= b;
    }
    if(greatest<c){
        greatest= c;
    }
    if(greatest<d){
        greatest=d;
    }
    return greatest;
}
