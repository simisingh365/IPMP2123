#include "bits/stdc++.h"
using namespace std;


void sort(int * A, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (A[j] > A[j+1])
                swap(A[j], A[j+1]);
        }
    }
}


int main()
{
    cout << "Bubble Sort " << endl << endl;

    int n; 
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); 
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, n); 
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl ;
}