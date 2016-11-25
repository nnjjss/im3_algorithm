#include <stdio.h>

int main() {
    
    int n, num, i, max, min;
    scanf("%d %d", &n, &num);
    max=num; min=num;
    for(i=1; i<n; i++) {
        scanf("%d", &num);
        if(min>num)
            min=num;
        if(max<num)
            max=num;
    }
    printf("%d %d\n", min, max);
    
    return 0;
}
