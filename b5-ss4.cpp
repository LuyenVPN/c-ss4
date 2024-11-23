#include <stdio.h>

int main(){
	int a, b, c, d;
	printf("nhap 3 so nguyen: ");
	scanf("%d %d %d", &a, &b, &c);
	if((a < c && c < b) || a > c && c > b){
		printf("so thu 3 nam trong giua so thu 2 va so thu 1") ;
		
	}else{
		printf("so thu 3 khong nam trong giua so thu 2 va so thu 1") ;
	}
	
	
	return 0; 
} 
