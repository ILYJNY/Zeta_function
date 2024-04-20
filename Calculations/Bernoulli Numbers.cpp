//
// Created by Backup on 2024-04-20.
//
#include "iostream"
#include "complex"
#include "cmath"
#define ulld unsigned long long int
#define lf long double


lf factorial(lf n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n-1);
}


lf Combination(ulld n, ulld k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}



lf B(ulld n) {
    lf result = 0;
    for (ulld k = 0;k<=n;k++) {
        lf result_22 = 0;
        for (ulld r = 0;r<=k;r++) {
            if (r % 2 == 0) {
                result_22 += pow(r, n) * Combination(k, r);
            }
            else {
                result_22 += pow(r, n) * Combination(k, r) * (-1);
            }
        }
        result += (1/(k+1)) * result_22;
    }
}

