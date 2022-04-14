#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char** argv) {
    int n = atoi(argv[1]);
    int k = 1;
    int a[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            a[i-j][j] = k++;
        }
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            a[n-j-1][i+j+1] = k++;
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
