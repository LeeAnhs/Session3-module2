#include<stdio.h>

int main () {
	float Celsius, Fahrenheit;
	printf("Nhap nhiet do Celsius: ");
	scanf("%f", &Celsius);
	
	Fahrenheit = Celsius * 9/5+32;
	
	printf("Doi sang Fahrenheit la: %.2f ",Fahrenheit );
	
	return 0;
}
