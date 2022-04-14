#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char** argv) {
    int n = atoi(argv[1]);
    int a[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == n-1) {
                a[i][j] = i+j+1;
            } else if (j == 0 || i == n-1) {
                a[i][j] = (n-1)*4 - (i+j-1);
            } else {
                a[i][j] = 0;
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
