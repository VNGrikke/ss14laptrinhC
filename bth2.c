#include <stdio.h>

// Hàm s? d?ng con tr? d? tính t?ng các s? nguyên t? do?n cho tru?c
int tinhTong(int *batDau, int *ketThuc) {
    int tong = 0;
    int ptr = *batDau;

    while (ptr <= *ketThuc) {
        tong += ptr;
        ptr++;
    }

    return tong;
}

int main() {
    int batDau, ketThuc;

    // Nh?p do?n s? nguyên
    printf("Nhap gia tri bat dau: ");
    scanf("%d", &batDau);
    printf("Nhap gia tri ket thuc: ");
    scanf("%d", &ketThuc);

    // Tính t?ng s? d?ng con tr?
    int tong = tinhTong(&batDau, &ketThuc);

    // Hi?n th? t?ng
    printf("Tong cac so nguyen tu %d den %d la: %d\n", batDau, ketThuc, tong);

    return 0;
}
