#include<stdio.h>

int main () {
	//B1:Khai bao bien toan,van,anh
	float toan,van,anh;
	//B2:Nhap xuat du lieu toan,van,anh
	printf("Nhap diem Toan: ");
	scanf("%f", &toan);
	 
	printf("Nhap diem Van: ");
	scanf("%f", &van);
	
	printf("Nhap diem Anh: ");
	scanf("%f", &anh);
	//B3:Xu ly tinh toan
    	float  sum=toan+van+anh;
	float tbc=sum/3;
	 //B4: In ra màn hình
	printf("Tong diem 3 nam la: %.2f\n", sum);
	printf("Diem trung binh 3 mon là: %.2f\n", tbc);
	//B5: Ket thuc chuong trinh
	return 0;
} 
