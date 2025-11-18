/*
You will be given an array A and the size of that array N. You need to make a copy of this array named B. Then sort the array B in ascending order.

After that, you need to make another array C, where each index i (0 <= i < N) of array C is the absolute difference between array A[i] and B[i].
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n], c[n];

        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];  // copy
        }

        // short
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<n-1-i; j++) {
                if(b[j] > b[j+1]) {
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }

        // c array
        for(int i=0; i<n; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        // print c
        for(int i=0; i<n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}

