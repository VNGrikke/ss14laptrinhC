#include <stdio.h>

// Ham su dung con tro de dem so ky tu trong chuoi
int demKyTu(char *chuoi) {
    int dem = 0;
    char *ptr = chuoi;

    while (*ptr != '\0') {
        dem++;
        ptr++;
    }

    return dem;
}

int main() {
    char chuoi[100];

    // Nhap chuoi ky tu
    printf("Nhap chuoi ky tu: ");
    gets(chuoi);

    // Dem so ky tu su dung con tro
    int soKyTu = demKyTu(chuoi);

    // Hien thi so ky tu
    printf("So ky tu trong chuoi la: %d\n", soKyTu);

    return 0;
}
