#include<stdio.h>

int main(void) 
{
	double celsius, fahrenheit;	// 

	printf("화씨온도=");
	scanf("%lf", &fahrenheit);	// floating point 

	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	printf("섭씨온도=%lf \n", celsius);

	return 0;
}