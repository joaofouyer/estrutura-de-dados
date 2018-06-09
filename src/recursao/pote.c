#include <stdio.h>
#include "pote.h"

int Pote(int a, int n){
    int pot, y;

    if (n == 0) pot =1;

    else if (n == 1) pot = a;
    else if(n % 2 == 0){
        y = Pote(a, n/2);
        pot = y*y;
    }

    else {
        y = Pote(a, n-1);
        pot = a*y;
    }
    return pot;
}

int Fat(int n){
    int f;

    if (n == 0) f = 1;
    else f = n * Fat(n-1);
    return f;
}

int mdc1 (int m, int n){
    int a, d;

    if(m == 0) a = n;
    else if (m > n)  a = mdc1(n, m);
    else {
        d = n - m;
        a = mdc1(m, d);
    }
    return a;
}

int mdc2(int m, int n){
    int a, r;
    if (m % n == 0) a = n;
    else {
        r = m % n;
        a = mdc2(n, r);
    }
    return a;
}
