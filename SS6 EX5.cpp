#include<stdio.h>

int main() {
    int Month, Year;
    printf("\nNhap nam: ");
    scanf("%d", &Year);
    while (Year <= 0) {
        printf("Nam khong hop le! Vui long nhap lai: ");
        scanf("%d", &Year);
    }
    printf("Nam hop le!\n");
    
    printf("\nNhap thang: ");
    scanf("%d", &Month);
    while (Month < 1 || Month > 12) {
        printf("Thang khong hop le! Vui long nhap lai: ");
        scanf("%d", &Month);
    }
    printf("Thang hop le!\n");
  
    if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
        printf("Thang nay co 31 ngay\n");
    } else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
        printf("Thang nay co 30 ngay\n");
    } else if (Month == 2) {
        if (Year % 4 == 0 && (Year % 100 != 0 || Year % 400 == 0)) {
            printf("Thang nay co 29 ngay\n");
        } else {
            printf("Thang nay co 28 ngay\n");
        }
    }
}
