#include <stdio.h>
#include <math.h>

int main() {
    int luaChon;

    do {
        printf("\n==================== MENU LAB 3 ====================\n");
        printf("1. Chuc nang 1: Tinh hoc luc sinh vien\n");
        printf("2. Chuc nang 2: Giai phuong trinh bac hai tong quat\n");
        printf("3. Chuc nang 3: Tinh tien dien tieu thu hang thang\n");
        printf("4. Thoat chuong trinh\n");
        printf("====================================================\n");
        printf("Moi ban chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        while (getchar() != '\n');

        switch(luaChon) {
            case 1: {
                float diem;
                printf("\n--- CHUC NANG 1: TINH HOC LUC SINH VIEN ---\n");
                printf("Nhap vao diem so cua sinh vien (0.0 - 10.0): ");
                scanf("%f", &diem);

                if (diem < 0.0 || diem > 10.0) {
                    printf("Diem so nhap vao khong hop le!\n");
                } else {
                    if (diem >= 9.0) {
                        printf("Hoc luc: Xuan sac\n");
                    } else if (diem >= 8.0) {
                        printf("Hoc luc: Gioi\n");
                    } else if (diem >= 6.5) {
                        printf("Hoc luc: Kha\n");
                    } else if (diem >= 5.0) {
                        printf("Hoc luc: Trung binh\n");
                    } else if (diem >= 3.5) {
                        printf("Hoc luc: Yeu\n");
                    } else {
                        printf("Hoc luc: Kem\n");
                    }
                }
                break;
            }
            case 2: {
                float a, b, c;
                printf("\n--- CHUC NANG 2: GIAI PHUONG TRINH BAC HAI (ax^2 + bx + c = 0) ---\n");
                printf("Nhap he so a: "); scanf("%f", &a);
                printf("Nhap he so b: "); scanf("%f", &b);
                printf("Nhap he so c: "); scanf("%f", &c);

                if (a == 0) {
                    printf("Vi a = 0, phuong trinh tro thanh phuong trinh bac nhat: %.2fx + %.2f = 0\n", b, c);
                    if (b == 0) {
                        if (c == 0) {
                            printf("Phuong trinh co vo so nghiem.\n");
                        } else {
                            printf("Phuong trinh vo nghiem.\n");
                        }
                    } else {
                        float x = -c / b;
                        printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
                    }
                } else {
                    float delta = b*b - 4*a*c;
                    printf("Delta = %.2f\n", delta);
                    
                    if (delta < 0) {
                        printf("Phuong trinh vo nghiem (Delta < 0).\n");
                    } else if (delta == 0) {
                        float xKhep = -b / (2*a);
                        printf("Phuong trinh co nghiem kep: x = %.2f\n", xKhep);
                    } else {
                        float x1 = (-b + sqrt(delta)) / (2*a);
                        float x2 = (-b - sqrt(delta)) / (2*a);
                        printf("Phuong trinh co 2 nghiem rieng biet:\n");
                        printf("x1 = %.2f\n", x1);
                        printf("x2 = %.2f\n", x2);
                    }
                }
                break;
            }
            case 3: {
                float soKwh, tongTien = 0;
                printf("\n--- CHUC NANG 3: TINH TIEN DIEN TIEU THU HANG THANG ---\n");
                printf("Nhap tong so kWh dien tieu thu trong thang: ");
                scanf("%f", &soKwh);

                if (soKwh < 0) {
                    printf("So kWh dien tieu thu khong duoc am!\n");
                } else {
                    float giaBac1 = 1678;
                    float giaBac2 = 1734;
                    float giaBac3 = 2014;
                    float giaBac4 = 2536;
                    float giaBac5 = 2834;
                    float giaBac6 = 2927;

                    if (soKwh <= 50) {
                        tongTien = soKwh * giaBac1;
                    } 
                    else if (soKwh <= 100) {
                        tongTien = (50 * giaBac1) + ((soKwh - 50) * giaBac2);
                    } 
                    else if (soKwh <= 200) {
                        tongTien = (50 * giaBac1) + (50 * giaBac2) + ((soKwh - 100) * giaBac3);
                    } 
                    else if (soKwh <= 300) {
                        tongTien = (50 * giaBac1) + (50 * giaBac2) + (100 * giaBac3) + ((soKwh - 200) * giaBac4);
                    } 
                    else if (soKwh <= 400) {
                        tongTien = (50 * giaBac1) + (50 * giaBac2) + (100 * giaBac3) + (100 * giaBac4) + ((soKwh - 300) * giaBac5);
                    } 
                    else {
                        tongTien = (50 * giaBac1) + (50 * giaBac2) + (100 * giaBac3) + (100 * giaBac4) + (100 * giaBac5) + ((soKwh - 400) * giaBac6);
                    }

                    printf("------------------------------------------\n");
                    printf("Tong dien nang tieu thu: %.1f kWh\n", soKwh);
                    printf("Tong so tien dien can thanh toan: %.0f dong\n", tongTien);
                    printf("------------------------------------------\n");
                }
                break;
            }
            case 4:
                printf("\nThoat chuong trinh thanh cong. Hen gap lai !\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai tu 1 den 4.\n");
        }
    } while(luaChon != 4);

    return 0;
}