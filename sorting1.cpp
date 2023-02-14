#include "bits/stdc++.h"
using namespace std;


void heapify(int * arr, int n, int i)
{
    int L = i; 
    int l = (2*i)+1; 
    int r = (2*i)+2;



    if ((l < n) && (arr[l] > arr[L])) 
        L = l;
    if ((r < n) && (arr[r] > arr[L])) 
        L = r;
    
    if (L != i) 
    {
        swap(arr[i], arr[L]); 
        heapify(arr, n, L); 
    }
}


void sort(int * arr, int n)
{
    for (int i = (n/2)-1; i >= 0; i--)
        heapify(arr, n, i); 
    
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    }
}


int main()
{
    cout << " Heap Sort !" << endl << endl;

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