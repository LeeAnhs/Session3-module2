#include<stdio.h>
//B1:Khai bao bien 
//B2:Xu ly nhap, xuat cua chieu cao va do dai
//b3:Tinh dien tich
//b4:in ra ket qua
//b5 ket thuc chuong trinh
int main() {
	float length,height;
	printf("nhap do dai: ");
	scanf("%f", &length);
	
	printf("nhap chieu cao: ");
	scanf("%f", &height);
	
	float area=0.5*length*height;
	
	printf("Dien tich tam giac la: %f\n", area);
	
	return 0;
}
