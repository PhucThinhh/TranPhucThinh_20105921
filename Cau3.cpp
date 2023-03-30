#include <stdio.h>
int tongCacSo(int n){
	if (n==0){
		return 0;
	}
	return (n%10) + tongCacSo(n / 10);
}
int main(){
	int n ;
	printf("Nhap n : ");
	scanf("%d", &n);
	int sum = tongCacSo(n);
	printf("Tong cac so cua %d la %d\n",n ,sum);
	return 0;
}
