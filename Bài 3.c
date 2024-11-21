#include<stdio.h>

int main () {
	//B1:Khai bao bien
	float r,C,S;
	const float PI=3.14;
	//B2:Xu ly nhap xuat du lieu
	
	printf("Nhap ban kinh hinh tron:");
	scanf("%f", &r);
	//B3:Xu ly tinh toan
	C=2*PI*r;
	S=PI*r*r;
	//B4:Hien thi ket qua
	printf("Chu vi la: %.2f\n", C);
	printf("Dien tich la: %.2f\n", S);
	//B5:Ket thuc chuong trinh
	return 0;
	
	
}
