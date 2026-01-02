
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows for half diamond: ");
    scanf("%d", &n);

    // Upper half
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j