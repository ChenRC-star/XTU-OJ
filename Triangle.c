#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(long long *)a;
    long long y = *(long long *)b;
    return (x < y) - (x > y); // descending
}

int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        long long sides[10000];
        for (int i = 0; i < N; i++) {
            scanf("%lld", &sides[i]);
        }

        qsort(sides, N, sizeof(long long), cmp);

        long long ans = 0;
        for (int i = 0; i < N - 2; i++) {
            if (sides[i + 1] + sides[i + 2] > sides[i]) {
                ans = sides[i] + sides[i + 1] + sides[i + 2];
                break;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}