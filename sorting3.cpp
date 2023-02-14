#include "bits/stdc++.h"
using namespace std;


void sort(int * A, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i, sml = A[j]; 
        while (A[j-1] > sml && j > 0)
        {
            A[j] = A[j-1]; 
            j--; 
        }
        A[j] = sml;
    }
}


int main()
{
    cout << " Insertion Sort " << endl << endl;

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