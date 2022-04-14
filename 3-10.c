#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(int argc __attribute__((unused)), char** argv) {
    int n = atoi(argv[1]);
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // int k = MIN(MIN(i, n-i-1), MIN(j, n-j-1));
            int k = i;
            if (k > j) k = j;
            if (k > n-i-1) k = n-i-1;
            if (k > n-j-1) k = n-j-1;
            
            if (j >= i) {
                a[i][j] = n*n - (n-(k)*2) * (n-(k)*2) + (i-k + j-k + 1);
            } else {
                a[i][j] = n*n - (n-(k+1)*2) * (n-(k+1)*2) - (i-k + j-k - 1);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
