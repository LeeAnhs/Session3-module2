#include<stdio.h>

int main () {
	//B1:Khai bao bien
	float Celsius, Fahrenheit;
	//B2:Nhap xuat du lieu
	printf("Nhap nhiet do Celsius: ");
	scanf("%f", &Celsius);
	//B3:Xu ly tinh toan
	Fahrenheit = Celsius * 9/5+32;
	//B4:Hien thi ket qua
	printf("Doi sang Fahrenheit la: %.2f ",Fahrenheit );
	//B5:Ket thuc chuong trinh
	return 0;
}
