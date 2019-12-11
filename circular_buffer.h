/*
 * circular_buffer.h
 *
 *  Created on: 5 Dec 2019
 *      Author: jinxluck
 *
 * Note:
 * 	a buffer for integers
 */

#ifndef CIRCULAR_BUFFER_H_
#define CIRCULAR_BUFFER_H_

//Function to insert integers into the buffer, on space at the time.
//The buffer returns 0 if successful.
//The buffer returns 1 if not successful.
int buffer_input(int input);


//Function returns the output, one space at the time.
//Function returns 0 if failing (can be difficult to discern).
int buffer_output(void);


#endif /* CIRCULAR_BUFFER_H_ */
