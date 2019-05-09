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
 * @brief The programm consist of array with constant length.  Main function call 
 * other functions that calculate: mean, maximum, median and minimum values. And 
 *  function is displays on the terminal statistic of the array and also sortes the array.
 *
 * <Add Extended Description Here>
 *
 * @author Nail Ismagilov
 * @date May 2019
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief void print_array(unsigned char * , int )
 *
 * It is a simple function with two input data, a pointed variable array and the size of the array.
 * It consist "for" loop to print every element of the array and "if" statement, which logic allows to
 * put coma or dot after an element on the terminal.
 *
 * @param <int i> <loop counter>

 *
 * @return <Null>
 */
 
 /**
 * @brief unsigned char find_maximum(unsigned char * , int );
 *
 *  The function finds a maximum value of a pointed array. Initial value of max is 0th 
 * element of the array. If an ith element  of the array is greater tham max value, 
  * then max is equal to ith value of the array.
 *
 * @param <int i> <loop counter>
 * @param <max> <integer value>
 *
 * @return <max>
 */

 /** 
 * @brief unsigned char find_minimum(unsigned char * , int );
 *
 *  The function finds a minimum value of a pointed array. Initial value of max is 0th 
 *  element of the array. If an ith element  of the array is greater tham max value, 
  * then max is equal to ith value of the array.
 *
 * @param <int i> <loop counter>
 * @param <max> <integer value>
 *
 * @return <max>
 *
 */
 
  /** 
 * @brief unsigned char find_mean(unsigned char * , int );
 *
 *  The function finds a mean value of a pointed array. First the sum of 
 *  all elements is evaluated by the for loop. Thab the sum of the arrays elements divided
 *  by size of the array to find a mean value.
 *
 * @param <int i> < for loop counter>
 * @param <int mean> <integer value, which consist of the result of divivsion sum by size of the array>
 * @param <int sum> <sum of the array elements>
 *
 * @return <mean>
 *
 */

  /** 
 * @brief unsigned char find_median(unsigned char * ptr, int count), two input data,
 * character pointer which is an array and  integer count which is a size of the array. 
 *
 *  The function finds a medium value of the array. If the count is an even number the medium 
 *  value of the array is mean value between positions (count / 2) and (count / 2)+1. Otherwise the medium 
 * value is located in the position count / 2.
 *
 * @param <int medium> <integer value>
 * @param <int sum> <sum of the array elements>
 *
 * @return <medium>
 *
 */
 
   /** 
 * @brief unsigned char sort_array(unsigned char * ptr, int count), two input data,
 * character pointer which is an array and  integer count which is a size of the array. 
 *
 *  There are two for loops which works with the same array. Into the last for loop if 
 *  statement is allocated. If the element of first loop is lower than element from the second loop
 *  then they are switch positions. By assigning the value from the first loop in free_value to save it value.
 *
 * @param <int i> < for loop counter>
 * @param <int free_value>  <integer value which consist of 
 *
 * @return <None>
 *
 */
 
   /** 
 * @brief void print_statistics(int max, int min, int median, int mean), four input data,
 * it is needed integer values, max, min median and mean. 
 *
 *  The function displays on the terminal statistic about the array. Namely maximum, minimum,
 *  mean and medium values.
 * 
 * 
 * @return <None>
 *
 */
#endif /* __STATS_H__ */
