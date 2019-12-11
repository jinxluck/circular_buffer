/*
 * Main.c
 *
 *  Created on: 5 Dec 2019
 *      Author: jinxluck
 *
 * Note:
 * 	The main file is only for testing purposes.
 */

#include<stdio.h>
#include "circular_buffer.h"


int main(void)
{
	int a = 0;
	int i = 0;

	//input test
	for(i = 1;i != 10; i++)
	{
		a = buffer_input(i);
		printf("%d \n",a);
	}

	printf("\n");


	//output test
	for(i = 0;i != 10; i++)
	{
		a = buffer_output();
		printf("%d \n",a);
	}

	return 0;
}


