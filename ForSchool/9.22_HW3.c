#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	

int main()
{
	int a,b,c,sum;
	 
	printf("정수를 입력하시오: ");	
	scanf("%d", &a);				

    printf("정수를 입력하시오: ");	
	scanf("%d", &b);
    
    printf("정수를 입력하시오: ");	
	scanf("%d", &c);	

    sum = (a + c + b) / 3;
	printf("평균은 %d입니다.\n",sum);

	return 0;					}