#include "bits/stdc++.h"
using namespace std;


void merge(int * A, int L, int U)
{
    int M = (L+U)/2; 
    int * B = (int *) malloc((U-L+1) * sizeof(int)); 
    int P1 = L, P2 = M+1, P = 0; 

    while ((P1 <= M) && (P2 <= U)) 
    {
        if (A[P1] < A[P2]) B[P++] = A[P1++];
        else B[P++] = A[P2++];
    }
    while (P1 <= M) B[P++] = A[P1++]; 
    while (P2 <= U) B[P++] = A[P2++]; 

    P = 0; 
    for (int i = L; i <= U; i++) A[i] = B[P++]; 
}


void sort(int * A, int L, int U)
{
    if (L < U) 
    {
        int M = (L+U)/2; 
        sort(A, L, M);
        sort(A, M+1, U);
        merge(A, L, U); 
    }
}

// Main Function
int main()
{
    cout << " Merge Sort !" << endl << endl;

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