#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int diff = n - m;
        if (diff == 0) {
            printf("None\n");
        } else if (diff > 0) {
            if (diff % 2 == 0) {
                printf("Bob %d\n", diff / 2);
            } else {
                printf("Bob %.1f\n", diff / 2.0);
            }
        } else {
            int abs_diff = -diff;
            if (abs_diff % 2 == 0) {
                printf("Alice %d\n", abs_diff / 2);
            } else {
                printf("Alice %.1f\n", abs_diff / 2.0);
            }
        }
    }
    return 0;
}