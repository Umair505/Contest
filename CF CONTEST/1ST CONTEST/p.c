#include <stdio.h>

int main() {
   
        int n, k;
        scanf("%d %d", &n, &k);

        int b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        // Check if a suitable sequence 'a' exists
        int product_a = 2023;
        for (int i = 0; i < n; i++) {
            product_a /= b[i];
            printf("%d ",product_a);
        }

        // Output
        if (product_a != 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
            for (int i = 1; i <= k; i++) {
                printf("%d ", i);
            }
            printf("\n");
        }
    return 0;
}
