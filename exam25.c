#include<stdio.h>

main() {
     int i, a, n;
    scanf("%d", & n);

    for (i = 1; i <= 10; i++) {
        a = n * i;
        printf("%d * %d = %d\n", n, i, n * i);
    }

    
}