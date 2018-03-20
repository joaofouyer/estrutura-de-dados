#include <stdio.h>

int Pote(int, int);
int Fat(int);
int mdc1(int, int);
int mdc2(int, int);

// int chamadas = 0;    //  Descomente caso queira saber quantas vezes a função foi chamada.

int main() {
    printf("\n%d\n", Pote(6,3));
    // printf("\n%d\n", chamadas);    //  Descomente caso queira saber quantas vezes a função foi chamada.
    return 0;
}

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

    // chamadas = chamadas + 1;    //  Descomente caso queira saber quantas vezes a função foi chamada.
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

    }  
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
