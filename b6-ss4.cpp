#include <stdio.h>

int main(){
	int dientieuthu, sodiencu, sodienmoi;
	float tiendien; 
	 printf("so dien thang cu: ");
	 scanf("%d", &sodiencu);
	 printf("so dien thang moi: ");
	 scanf("%d", &sodienmoi);
	dientieuthu= sodienmoi - sodiencu; 
	if(0 < dientieuthu && dientieuthu <50 ){
		tiendien= dientieuthu * 10000; 
		printf("tien dien cua ho gia dinh trong thang là: %.2f VND\n", tiendien); 
	}else if (50 <= dientieuthu && dientieuthu <100){
		tiendien= dientieuthu * 15000; 
		printf("tien dien cua ho gia dinh trong thang là: %.2f VND\n", tiendien); 
	}else if (100 <= dientieuthu && dientieuthu <150){
		tiendien= dientieuthu * 20000; 
		printf("tien dien cua ho gia dinh trong thang là: %.2f VND\n", tiendien); 
	}else if (150 <= dientieuthu && dientieuthu <200){
		tiendien= dientieuthu * 25000; 
		printf("tien dien cua ho gia dinh trong thang là: %.2f VND\n", tiendien); 
	}else if (200< dientieuthu){
    	tiendien= dientieuthu * 30000; 
    	printf("tien dien cua ho gia dinh trong thang là: %.2f VND\n", tiendien); 
	}else if (0>= dientieuthu){
		printf("So dien moi phai lon hon so dien cu"); 
	} 
	
	return 0;
	 
}

