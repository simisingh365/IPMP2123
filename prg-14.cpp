/*The first line contains an integer n. Input will consist of n+1  lines where n  is the number
 given in the first line of the input followed by n lines.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
class AddElements {
    T element;
  public:
    AddElements (T arg) {element=arg;}
    T add (T x) {return x+element;}
};

template <>
class AddElements <string> {
    string element;
  public:
    AddElements (string arg) {element=arg;}
    string concatenate (string arg)
    {
      string s = element+arg;
      return s;
    }
};


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
