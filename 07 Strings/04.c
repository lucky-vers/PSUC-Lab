#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char temp[50];

    printf("Number of names: ");
    scanf("%d", &n);

    char s[n][50];
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) scanf("%s", s[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (i = 0; i < n; i++) printf("%s\n", s[i]);

    return 0;
}

