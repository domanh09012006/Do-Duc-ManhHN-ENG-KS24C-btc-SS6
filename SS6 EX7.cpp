#include<stdio.h>
int main(){
	int n = 1, Number;
		printf("Nhap so nguyen: ");
		scanf("%d", &Number);
		printf("\nCac uoc cua so do la:");
	while (n <1001){
		if(n%Number == 0){
			printf("%d\n", n);
		}
			++n;
		
	}
}
