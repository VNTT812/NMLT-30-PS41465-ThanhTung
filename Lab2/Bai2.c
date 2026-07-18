#include <stdio.h>
int main(){
    int toan, ly, hoa;
    printf("Nhap diem toan, ly, hoa: ");
    scanf("%d%d%d",&toan,&ly,&hoa);

    float dtb = (toan*3 + ly*2 + hoa)/6.0;

    printf("Toan: %d\nDiem ly: %d\nDiem hoa: %d\nDiem TB: %.2f\n",toan,ly,hoa,dtb);
    return 0;
}