/*
 ============================================================================
 Name        : Ass1_Hw2_Ex1.c
 Author      : Mostafa Wael
 Version     :
 Copyright   : Your copyright notice
 Description : Program takes integer from user and check if the number odd or even and display the result
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//to solve buffer problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x;


	printf("Enter an Integer number the want to check :");
	scanf("%d" , &x);

	if (x % 2 ==0 )
		printf("%d number is EVEN" , x);
	else
		printf("%d number is Odd" , x);


	return 0;
}
