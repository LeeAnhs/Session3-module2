#include<stdio.h>

int main () {
	float r,C,S;
	const float PI=3.14;
	
	
	printf("Nhap ban kinh hinh tron:");
	scanf("%f", &r);
	
	C=2*PI*r;
	S=PI*r*r;
	
	printf("Chu vi la: %.2f\n", C);
	printf("Dien tich la: %.2f\n", S);
	
	return 0;
	
	
}
