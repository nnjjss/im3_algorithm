#include <stdio.h>

int main() {
    
    int n, i, j;
    scanf("%d", &n);
    
    for(i=1; i<n; i++) {
        for(j=1; j<=n-i; j++)
            printf(" ");
        for(j=1; j<=2*i-1; j++)
            if(j==1 || j==2*i-1)
                printf("*");
            else printf(" ");
        printf("\n");
    }
    for(i=1; i<=2*n-1; i++) {
        printf("*");
    }
    printf("\n");
    
    return 0;
}
