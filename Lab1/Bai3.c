#include <stdio.h>

int main() {
    float diemToan , diemLy, diemHoa;
    char hoten[50], mssv[50];

    printf("Nhap vao ma so sinh vien: ");
    scanf("%s", mssv);

    printf("Nhap vao ho ten sinh vien: ");
    scanf(" %[^\n]", hoten);

    printf("Nhap vao diem toan: ");
    scanf("%f", &diemToan);

    printf("Nhap vao diem ly: ");
    scanf("%f", &diemLy);

    printf("Nhap vao diem hoa: ");
    scanf("%f", &diemHoa);

    float diemTB = (diemToan*2 + diemLy + diemHoa) / 4;

    printf("\nThong tin sinh vien:\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va Ten: %s\n", hoten);
    printf("Diem trung binh: %.1f\n", diemTB);

    return 0;
}