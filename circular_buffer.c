/*
 * circular_buffer.c
 *
 *  Created on: 5 Dec 2019
 *      Author: jinxluck
 *
 * Note:
 * 	a buffer for integers.
 */

#include <stdio.h>
#include "circular_buffer.h"

//Change this to change the size of the buffer.
#define length_of_buffer 4

int end_pointer = -1;
int front_pointer = 0;
int buffer[length_of_buffer];
int counter = 0;

int buffer_input(int input)
{
	if(counter != length_of_buffer)
	{
		if(end_pointer > length_of_buffer)
			end_pointer = -1;

		end_pointer += 1;
		counter += 1;
		buffer[end_pointer] = input;
		return 0;
	}
	else
	{
		return 1;
	}
}

int buffer_output(void)
{
	int ret_val = 0;

	if(counter != 0 || end_pointer > front_pointer)
	{
		counter -= 1;
		ret_val = buffer[front_pointer];
		front_pointer +=1;

		if(front_pointer > length_of_buffer)
			front_pointer = 0;

		return ret_val;
	}
	else
	{
		return 0;
	}
}
