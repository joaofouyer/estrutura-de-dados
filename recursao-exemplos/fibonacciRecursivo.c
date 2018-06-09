#include <stdio.h>

int fib2(int);
int tentarSomar(int, int, int);
int X(int);
int XX(int);


int main(){
	int ordem, termo;
	termo = fib2(10);	// Insira no parâmetro o valor que você quer testar.
	printf("Valo do termo: %d\n", termo);
	return 0;
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
