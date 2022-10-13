#include <stdlib.h>
#include "function_pointer.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each elecment of an array
 * @rray: to iterate over
 * @size: size of the array 
 * @action: pointer to function used
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i + 0; i < size; i++)
		action(array)[i]);
}
