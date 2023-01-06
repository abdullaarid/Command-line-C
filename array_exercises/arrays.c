//Student name: Abdulla Arid
//Student number: 101217955
/* SYSC 2006 Lab 3. 

 * Incomplete implementations of the functions that will be coded during the lab.
 */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "arrays.h"

/* Exercise 1. */

/* Return the average magnitude of the signal represented by
 * the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i += 1){
		sum += fabs(x[i]);
}
	return (sum/n);
}

/* Exercise 2. */

/* Return the average power of the signal represented by
 * the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], int n)
{
    double sum = 0;
	for (int i = 0; i < n; i += 1){
		sum = sum + pow(x[i],2);
}
	return (sum/n);
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i += 1){
		if (arr[i]>=max){
			max = arr[i];
}
	
}
	return (max);
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
    
	double min = arr[0];
	for (int i = 1; i < n; i += 1){
		if (arr[i]<=min){
			min = arr[i];
}
	
}
	return (min);
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
	double minimum = min(x, n);
	double maximum = max(x, n);

	for (int i = 0; i < n; i += 1){
		x[i] = (x[i]-minimum)/(maximum-minimum);
	}
}
