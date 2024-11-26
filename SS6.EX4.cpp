#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, delta;
	float x1, x2;
	printf("Nhap co so a: ");
	scanf("%d", &a);
	printf("Nhap co so b: ");
	scanf("%d", &b);
	printf("Nhap co so c: ");
	scanf("%d", &c);
	printf("\nPhuong trinh co dang: %dx^2 +%dx + %d = 0", a, b, c);
	if(a==0){
		x1 = x2 = -c/b;
		printf("\nNghiem cua phuong trinh la: %f", x1);
	}	
	delta = b*b - 4*a*c;
	if(delta>0){
		
		x1 = (b + sqrt(delta))/2*a;
		x2 = (-b + sqrt(delta))/2*a;
		printf("\nPhuong trinh có hai nghiem x1, x2 la: %f   %f", x1, x2);
	}else if(delta==0){
		x1 = x2 = -b/(2*a);
		printf("\nPhuong trinh co nghiem kep x1 = x2 la: %f", x1);
	}else if(delta<0){
		printf("\nPhuong trinh vo nghiem");
	}
}
