#include<stdio.h>
int main(){
	int Password = 2006, i = 1, n;
	while(i = 1){
		printf("\nNhap mat khau(4 so): ");
		scanf("%d", &n);
		if(n == Password){
			i++;
			printf("Mat khau chinh xac!");
			break;
		}else{
			printf("Mat khau sai!");
		}
		
	}
	
}
