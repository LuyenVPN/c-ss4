#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so thang: ");
	scanf("%d", &n);
	switch(n){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		   printf("thang %d co 31 ngay\n", n);
		   break; 
        case 4:
		case 6:
		case 9:
		case 11:
		   printf("thang %d co 30 ngay\n", n);
		   break; 
		case 2:
		    printf("thang %d co 28 hoac 29 ngay\n", n);
		    break; 
	default:
            printf("thang %d khong hop le\n", n); 
	} 
	
	
	
	
	
	
	return 0; 
} 
