#include "fibonacciRecursivo.h"

int Fibo(int n){
    int f;
    if (n < 3)
        f = 1;
    else
        f = Fibo(n-1) + Fibo(n-2);
    return f;
}

int fib2(int n){
    int f;
    f = tentarSomar(n, 1, 1);
    return f;
}

int tentarSomar(int n, int t1, int t2){
    int s, c;
    if (n == 1) s = t1;
    else if (n == 2) s = t2;
    else {
        c = t1 + t2;
        s = tentarSomar(n-1, t2, c);
    }
    return s;
}

int X(int n){
    int y;
    if ((n == 1 ) || (n == 2))
        y = n;
    else
        y = X(n-1) + n*X(n-2);
    return y;
}

int XX(int n) {
    int y;
    if (n == 0)
        y = 0;
    else
        y = XX(n / 3 + 1) + n;
    return y;
}