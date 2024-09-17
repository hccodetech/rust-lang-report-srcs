#include <stdio.h>

void main() {
    unsigned long long n = 61;
    unsigned long long t1 = 1, t2 = 0;

    for (int i=1; i<=n; i++) {
        if (i > 2) {
            unsigned long long curr = t1 + t2;
            t2 = t1;
            t1 = curr;
            printf("%llu ", curr);
        } else if (i == 1) {
            printf("%llu ", t2);
        } else if (i == 2) {
            printf("%llu ", t1);
        }
    }
}
