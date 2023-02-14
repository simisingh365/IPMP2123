#include "bits/stdc++.h"
using namespace std;


int partition(int * A, int L, int U)
{
    int i = L-1, j = U+1; 
    int p = U, pvt = A[U]; 

    for (int k = L; k <= U; k++)
    {
        if (A[k] < pvt) { i++; swap(A[i], A[k]); }
        else if (A[k] > pvt) { j--; swap(A[j], A[k]); }
    }

    return i;
}

void sort(int * A, int L, int U)
{
    if (L < U) 
    {
        int P = partition(A, L, U); 
        sort(A, L, P-1); 
        sort(A, P+1, U); 
    }
}


int main()
{
    cout << "Quick Sort " << endl << endl;

    int n; 
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); 
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, 0, n-1); 
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl ;
}