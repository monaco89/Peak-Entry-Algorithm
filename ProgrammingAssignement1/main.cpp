
#include <iostream>
#include <stdio.h>
using namespace std;


int findPeakEntry(int A[], int a, int b) {
    
    int m = (a+b)/2;
    
    
    //A[n/2] is before the peak entry
    if (A[m] > A[m-1] && A[m] < A[m+1]) {
        return findPeakEntry(A, m+1, b);
    }
    
    //A[n/2] is after the peak entry
    else if (A[m] < A[m-1] && A[m] > A[m+1]) {
        return findPeakEntry(A, a, m-1);
    }
    else
        //››the peak entry is A[n/2]
        return m;
    
}

int main() {
    int A[] = {1,3,4,5,6,7,8,5,2,1};
    int n = sizeof(A)/sizeof(int);
    cout << findPeakEntry(A,0,n) << endl;
    return 0;
}