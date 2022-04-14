#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(int argc __attribute__((unused)), char** argv) {
    int n = atoi(argv[1]);
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // int k = MAX(abs((n-1-i-i)/2), abs((n-1-j-j)/2));
            int k = i;
            if (k > j) k = j;
            if (k > n-i-1) k = n-i-1;
            if (k > n-j-1) k = n-j-1;
            
            a[i][j] = n / 2 - k + n % 2;
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
