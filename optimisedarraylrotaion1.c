#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* this code does not affect the array, it simply printf the result which is expected after the r rotations*/    
    
    int N;
    int d;
    scanf ("%d %d", &N, &d);
    
    int arr[N];
    for (int k = 0; k < N; k++) {
        scanf("%d", &arr[k]);
    }
    
    int t;
    for (int k = d; k < N; k++) {
        printf("%d ", arr[k]);
    }
    for (int k = 0; k < d; k++) {
        printf("%d ", arr[k]);
    }
    
    return 0;
}
