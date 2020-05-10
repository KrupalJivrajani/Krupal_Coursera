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
 * @file stats.h
 * @brief Contains all the functions for stats.c
 *
 * There are eight fucntions that are implemented in stats.c.
 *
 * @author Krupal Jivrajani
 * @date 11/5/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

unsigned char find_maximum(unsigned char *arr,int length);
/**
 * @brief It calculates the maximum.
 *
 * This function takes input the address of the arr.
 * calculate the maximum value of the elements
 *
 *
 * @param *arr The arr that is passsed
 * @param length The length of the arr
 * @return it returns the maximum.
 */ 
 
 unsigned char find_minimum(unsigned char *arr,int length);
/**
 * @brief It calculates the minimum.
 *
 * This function takes input the address of arr.
 * calculate the minimum value of the elements
 *
 *
 * @param *arr The arr whose elements are supposed to be sorted
 * @param length The length of the arr
 * @return it returns the minimum.
 
 */
 unsigned char find_mean(unsigned char *arr,int length);
/**
 * @brief It calculates the mean.
 *
 * This function takes input the address of the arr.
 * calculate the mean of the elements
 *
 *
 * @param *arr The arr which is passed
 * @param length The length of the arr
 * @return it returns the mean.
 */
 void sort_array(unsigned char *arr,int length);
/**
 * @brief Sorts the elements.
 *
 * This function takes input the address of the arr.
 * sort the elements in the arr in descending order.
 *
 * @param *arr The arr which is passed
 * @param length The length of the arr
 */
 
 unsigned char find_median(unsigned char *arr,int length);
/**
 * @brief Finds the median.
 *
 * This function takes input the address of the arr.
 * calculate the median of the arr that is passed on to this function.
 *
 *
 * @param *arr The arr which is passed
 * @param length The length of the arr
 * @return It returns the median.
 */
 
 void print_statistics(unsigned char mean,unsigned char median,unsigned char minimum,unsigned char maximum);
/**
 * @brief Prints the statistics
 *
 * It takes an input of 4 variables which are minimum,
 * maximum,mean and median. It then prints all the data.
 *
 * @param mean,median,minimum,maximum
 *
 */

void print_array(unsigned char *arr,int length);
/**
 * @brief Prints the data
 *
 * This function takes input the address of the arr.
 * print the data of the arr that is passed to this function.
 *
 * @param *arr The arr that is passed
 * @param length The length of the arr
 */
 


#endif /* __STATS_H__ */
