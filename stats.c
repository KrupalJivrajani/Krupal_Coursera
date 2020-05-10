/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Statistics of arr
 *
 * It calculates the basic statistics of elements of arr.
 *
 * @author Krupal Jivrajani
 * @date 11/5/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char median;
  
  unsigned char mean;
  
  unsigned char min;
  
  unsigned char max;
  /* Statistics and Printing Functions Go Here */
  printf("\n\nArray before sorting:\n");
  print_array(test,SIZE);
  sort_array(test,SIZE);
  mean = find_mean(test,SIZE);
  median = find_median(test,SIZE);
  min = find_minimum(test,SIZE);
  max = find_maximum(test,SIZE);
                             
  print_statistics(mean,median,min,max);
  printf("\n\nSorted: (Descending order)\n");
  print_array(test,SIZE);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char mean,unsigned char median,unsigned char minimum,unsigned char maximum)
{
	printf("\n\nMean    = %u",mean);
	printf("\nMedian  = %u",median);
	printf("\nMinimum = %u",minimum);
	printf("\nMaximum = %u",maximum);
}
void print_array(unsigned char *arr,int length)
{
	int loop=0;
	while(loop<length)
	{
		printf("%u ",arr[loop]);
		loop++;
	}
}
void sort_array(unsigned char *arr,int length)
{
	int outerLoop,innerLoop;
	unsigned char tempValue=0;

	for(outerLoop=0;outerLoop<length-1;outerLoop++)
		for(innerLoop=(outerLoop+1);innerLoop<length;innerLoop++)
			if(arr[outerLoop]<arr[innerLoop])
			{
				tempValue=arr[outerLoop];
				arr[outerLoop]=arr[innerLoop];
				arr[innerLoop]=tempValue;
			}


}
unsigned char find_median(unsigned char *arr,int length)
{
	if(length%2==0)
	{
		length=length/2;
		return ((arr[length-1]+arr[length])/2);
	}
}
unsigned char find_mean(unsigned char *arr,int length)
{
	int sum=0;
	while(length>0)
	{
		sum+=*arr;
		arr++;
		length--;
	}
	return (sum/40);
}

unsigned char find_maximum(unsigned char *arr,int length)
{
        unsigned char max;
        max=*arr;
        arr++;
        length--;
        while(length>0)
        {
                if(max<*arr)
                {
                        max=*arr;
                }
                arr++;
                length--;
        }
        return max;
}


unsigned char find_minimum(unsigned char *arr,int length)
{
	unsigned char min;
	min=*arr;
	arr++;
	length--;
	while(length>0)
	{
		if(min>*arr)
		{
			min=*arr;
		}
		arr++;
		length--;
	}
	return min;
}
