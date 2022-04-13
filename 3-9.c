#include <stdio.h>

int main()
{
    int n = 5;
    int a[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n-1 || j == n-1) {
                if (j >= i) {
                    a[i][j] = i+j+1;
                } else {
                    a[i][j] = (n-1)*4 - (i+j-1);
                }
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