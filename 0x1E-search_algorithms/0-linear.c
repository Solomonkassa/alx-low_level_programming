#include "search_algos.h"


/**
 * linear_search - search for a value in an array of integers
 * @array: the array of values
 * @size: the number of values
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
    int foundIndex = -1; 

    for (size_t i = 0; i < size; i++) 
    {
      if(array[i] == value)
      {
        foundIndex = i;
      }
    printf("Value checked array[%d]  = %d \n",array[i],value);
    }
    
    return foundIndex; 
}
