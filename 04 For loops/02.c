#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }

    return 0;
}
