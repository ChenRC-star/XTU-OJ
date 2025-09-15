#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int r;
        scanf("%d", &r);
        long long r2 = (long long)r * r;
        int count = 0;
        for (int x = 0; x <= r; x++) {
            long long d = r2 - (long long)x * x;
            int y0 = (int)(sqrt(d) + 0.5);
            if ((long long)y0 * y0 == d) {
                if (x == 0) {
                    if (y0 == 0) {
                        count += 1;
                    } else {
                        count += 2;
                    }
                } else {
                    if (y0 == 0) {
                        count += 2;
                    } else {
                        count += 4;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
} 