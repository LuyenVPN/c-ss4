#include <stdio.h>

int main(){
	float a, b, c;
	printf("nhap chieu dai canh a: "); 
	scanf("%f", &a); 
	printf("nhap chieu dai canh b: "); 
	scanf("%f", &b); 
	printf("nhap chieu dai canh c: "); 
	scanf("%f", &c); 
	if (a + b > c && a + c > b && b + c > a){
		printf("la 3 canh tam giac ");
	} else{
		printf("khong la 3 canh tam giac "); 
	} 
	
	
	return 0; 
} 
