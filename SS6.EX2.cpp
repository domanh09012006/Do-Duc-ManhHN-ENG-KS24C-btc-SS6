#include<stdio.h>
int main(){
	int  i, a, b,c,d,e;
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
		if(a%2 != 0){
			i++;
		}
		if(b%2 != 0){
			i++;
		}
		if(c%2 != 0){
			i++;
		}
		if(d%2 != 0){
			i++;
		}
		if(e%2 != 0){
			i++;
		}
		printf("So cac so le la: %d", i);
		printf("So cac so chan la: %d\n", 5-i);
	return 0;
}
