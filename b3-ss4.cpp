#include <stdio.h>

int main(){
	int n;
	printf("nhap so nguyen: ");
	scanf("%d", &n);
	if(n % 3 == 0 && n % 5 == 0){
    printf("so chia het cho 3 va 5");	
}else if(n % 3 ==0){
    printf("so chia het cho 3");
}else if(n % 5 ==0){
    printf("so chia het cho 5"); 
}else{
	printf("so khong chia het duoc cho 3 va 5"); 
} 
	 
	
	return 0; 
}
