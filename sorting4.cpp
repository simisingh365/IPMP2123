#include "bits/stdc++.h"
using namespace std;


void sort(int * A, int n)
{
    int sml = INT_MAX, lg = INT_MIN; 
    for (int i = 0; i < n; i++)
    {
        sml = min(sml, A[i]);
        lg = max(lg, A[i]); 
    }

    int * B = (int *) malloc((lg-sml+1) * sizeof(int));
    for (int i = 0; i <= lg-sml; i++) B[i] = 0; 

    for (int i = 0; i < n; i++)
        B[A[i]-sml]++; 
    
    int P = 0; 
    for (int i = 0; i <= lg-sml; i++)
        while (B[i]--) 
            A[P++] = i+sml;
}


int main()
{
    cout << " Counting Sort " << endl << endl;

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