﻿
// his is for VISUAL STUDIO 2017
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
factorial();


int main(void) {
	int i;
	printf("Enter the number whose factorial is to be calculated \n");
	scanf("%d", &i);
	printf("%d \n", factorial(i));
}


int factorial(int a) {
	if (a == 0)
		return 1;
	else
		return a * factorial(a - 1);
}



