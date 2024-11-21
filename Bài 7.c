#include<stdio.h>

int main() {
	//B1:Khai bao bien
	int a,b,c,d,x;
	//B2:Nhap xuat du lieu
	printf("Nhap so nguyen co 4 chu so: "),
	scanf("%d", &x);
	//B3:Kiem tra so co phai 4 chu so khong
	if (x>=1000 && x<=9999) {
		//B3.1:tach so va tinh
		a=x/1000;
		int temp=x%1000;
		b=temp/100;
		temp=temp%100;
		c=temp/10;
		d=temp%10;		
	//3.2:tinh tong
	int sum=a+b+c+d;
	
	//in tong cac chu so ra man hinh
	printf("Tong cac chu so da nhap la: %d\n", sum);	
	} else{
	printf("Vui long nhap so nguyen co 4 chu so \n");
		 
	} 
	
	return 0; 
} 
