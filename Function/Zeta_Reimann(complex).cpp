//
// Created by Backup on 2024-04-19.
//

#include "iostream"
#include "cmath"
#include "string"
#include "complex"

#define ulld unsigned long long int
#define lld long long int
#define lf long double
#define clf complex<long double>
using namespace std;

//근사(개느림)

struct result_complex {
    clf result_clf;
    string result_str;
};



clf Zeta_Complex_mostperfect(clf s) {
    clf result = 0;
    for (ulld n = 1;n<=pow(2, 64);n++) {
        clf for1(1);
        result += for1 / pow(n, s);
    }
    return result;
}

//근사
clf Zeta_Complex(clf s) {
    clf result = 0;
    for (ulld n = 1;n<pow(2, 24);n++) {
        clf for1(1);
        result += for1 / pow(n, s);
    }
    return result;
}


result_complex Zeta_Complex_DB(clf s) {

}



