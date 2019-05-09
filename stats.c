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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Nail Ismagilov>
 * @date <Mai 2019>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char * ptr, int count);
unsigned char find_maximum(unsigned char * ptr, int count);
unsigned char find_minimum(unsigned char * ptr, int count);
unsigned char find_mean(unsigned char * ptr, int count);
unsigned char find_median(unsigned char * ptr, int count);
unsigned char sort_array(unsigned char * ptr, int count);
void print_statistics(int max, int min, int median, int mean);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int max, min, mean, median ;
  /* Statistics and Printing Functions Go Here */

  max = find_maximum(test, SIZE);
  min = find_minimum(test, SIZE);
  median = find_median(test, SIZE);
  mean = find_mean(test, SIZE);
  sort_array(test, SIZE);
  print_statistics(max, min, median,  mean);
  print_array(test, SIZE);
}

void print_array(unsigned char * ptr, int count){
	
	int i = 0;
	
	printf("\n Array = ");
	for(i = 0; i < count; i++){
		if (i ==  0) {
			printf("%d,", ptr [ i ]);
		}
		else if (i == SIZE - 1) {
			printf(" %d.", ptr [ i ]);
		}
		else
			printf(" %d,", ptr [ i ]);
	
	}
	printf("\n");
   
}; 

unsigned char find_maximum(unsigned char * ptr, int count){
	int i, max;
	max = ptr[0];
	for( i = 1; i < count; i++)
		if (max <= ptr[i])
			max = ptr[i];
	return (max);
}

unsigned char find_minimum(unsigned char * ptr, int count){
	int i, min;
	min = ptr[0];
	for(i = 1; i < count; i++)
		if (min >= ptr[i])
			min = ptr[i];
	return(min);
}

unsigned char find_mean(unsigned char * ptr, int count){
	int i, mean, sum;
	for(i = 0; i < count; i++)
		sum += ptr [i];
	mean = sum / count;
	return(mean);
	
};

unsigned char find_median(unsigned char * ptr, int count){
	int median, n;
	if ( count % 2 == 0)
		median = (ptr[ n / 2] + ptr [n / 2+1] ) / 2;
	else
		median = ptr [n / 2];
	return (median);
};

unsigned char sort_array(unsigned char * ptr, int count){
	int free_value, i, j;
	printf("\n");
	for ( i = 0; i < count; i++){
		for ( j = 0; j < count; j ++){
			free_value = ptr [ j ];
			if ( ptr[ i ] < ptr [ j ]){
				free_value = ptr [ i ];
				ptr [ i ] = ptr [ j ];
				ptr [ j ] = free_value;
			}	
		}
	
	}
};

void print_statistics(int max, int min, int median, int mean){
	

	printf("\n***************** Statistic of the array ******************");
	printf("\n Maximal value of the array: %d", max);
	printf("\n Minimum value of the array: %d", min);
	printf("\n Median value of the array: %d", median);
	printf("\n Mean value of the array: %d", mean);
	printf("\n***********************************************************\n");
}

/* Add other Implementation File Code Here */
