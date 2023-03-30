#include <stdio.h>

int fibonaci(int n){
	if(n==0 || n==1){
		return n;
	}
	return fibonaci(n-1) + fibonaci(n-2);
}
int main (){
	int n;
	printf("Nhap so hang thu n = ");
	scanf("%d", &n);
	int term = fibonaci(n);
	printf (" So hang thu %d cua day fibonaci la %d\n", n, term);
	return 0;
}
