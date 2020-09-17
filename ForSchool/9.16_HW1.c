#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define   EXCHANGE_RATE 	1120	

int main()
{
	int usd;			
	int krw;				

	 
	printf("달러화 금액을 입력하시오: ");	
	 
	scanf("%d", &usd);				
	krw = usd;			
	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);

	return 0;					}