//
// Created by Backup on 2024-04-19.
//
#include "iostream"
#include "string"
#include <cmath>
#include "../Calculations/Bernoulli Numbers.cpp"
#define ulld unsigned long long int
#define lf long double

using namespace std;

struct result {
    lf result;
    string result_string;
};



//근사치(시간 드릅게 오래걸림)
lf Zeta_Real_mostperfect(int s) {
    for (ulld n = 1;n<=pow(2, 64);n++);
}
//근사치
lf Zeta_Real(int s) {
    lf result = 0;
    for (ulld n = 1;n<pow(2, 24);n++) {
        result += 1 / pow(n, s);
    }
    return result;
}



result Zeta_DB(ulld s) {
    long double result;
    string result_str;
    if (s < 0) {
        result = -1/12;
        result_str = "-1/12";
    }
    else if (s == 0) {
        result = -1/2;
        result_str = "-1/2";
    }



    else if (s == 1) {
        result = NULL;
        result_str = "∞(diffusion)";
    }

    else if (s % 2 == 0) {
        if (s % 4 == 0) {
            result = (-1) * (pow((2 * M_PI), s) * B(s)) / (2 * factorial(s));
            lf for_result_frac = (-1) * B(s) / (2 * factorial(s));
            result_str = "π^" + to_string(s) + to_string(for_result_frac);
        }
        else {
            result = (pow((2 * M_PI), s) * B(s)) / (2 * factorial(s));
            lf for_result_frac = B(s) / (2 * factorial(s));
            result_str = "π^" + to_string(s) + to_string(for_result_frac);
        }
    }
    return {result, result_str};
}

