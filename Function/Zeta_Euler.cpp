//
// Created by Backup on 2024-04-19.
//
#include "iostream"
#include <cmath>



using namespace std;


int Zeta_Real(int s) {

}



int Zeta_DB(int s) {
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
        result =
    }

}

