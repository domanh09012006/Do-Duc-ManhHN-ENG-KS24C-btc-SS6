#include<stdio.h>
int main(){
	int  sum, a, b,c,d,e;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
		printf("Nhap so nguyen b: ");
	scanf("%d", &b);
		printf("Nhap so nguyen c: ");
	scanf("%d", &c);
		printf("Nhap so nguyen d: ");
	scanf("%d", &d);
		printf("Nhap so nguyen e: ");
	scanf("%d", &e);
		sum= a+b+c+d+e;
		if(a%2 == 0){
			sum=sum-a;
		}
		if(b%2 == 0){
			sum=sum-b;
		}
		if(c%2 == 0){
			sum=sum-c;
		}
		if(d%2 == 0){
			sum=sum-d;
		}
		if(e%2 == 0){
			sum=sum-e;
		}
		printf("Tong cac so le la: %d", sum);
	return 0;
}
