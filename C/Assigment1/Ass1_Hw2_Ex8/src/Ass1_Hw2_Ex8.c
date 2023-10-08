/*
 ============================================================================
 Name        : Ass1_Hw2_Ex8.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : c program to make a simple calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char operand;
	float num1 , num2;
	float result=0;


	printf("Enter Operator either + or - or * or / ");
	scanf("%c" , &operand);

	printf("Enter Two Operand :");
	scanf("%f%f" , &num1 , &num2);


	switch (operand)
	{
	case '+':
		result = num1+num2;
		printf("%f + %f = %.1f" , num1 , num2 , result);
		break;
	case '-':
		result = num1-num2;
		printf("%f - %f = %.1f" , num1 , num2 , result);
		break;
	case '*':
		result = num1*num2;
		printf("%f * %f = %.1f" , num1 , num2 , result);
		break;
	case '/':
		result = num1/num2;
		printf("%f / %f = %.1f" , num1 , num2 , result);
		break;

	default:

		printf("Wrong Operator");
		break;

	}


	return 0;
}
