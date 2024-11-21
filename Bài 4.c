#include<stdio.h>

int main () {
	float toan,van,anh;
	
	printf("Nhap diem Toan: ");
	scanf("%f", &toan);
	 
	printf("Nhap diem Van: ");
	scanf("%f", &van);
	
	printf("Nhap diem Anh: ");
	scanf("%f", &anh);
	
    float  sum=toan+van+anh;
	float tbc=sum/3;
	 
	printf("Tong diem 3 nam la: %.2f\n", sum);
	Printf("Diem trung binh 3 mon là: %.2f\n", tbc);
	
	return 0;
} 
