/*
 ============================================================================
 Name        : rabbit.c
 Author      : Gonzalo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


static double pairs (double *cache,int year) {
	int init_values[] = {1,1,1,2,3,2};
	if (5 < year)
	{
		if (-1 == cache[year])
		{
			cache[year] = pairs(cache, year-1) + pairs(cache, year-3) - pairs(cache, year-5);
		}
	}
	else
	{
		return init_values[year];
	}
  return cache[year];
}

#define SHOW(year) printf ("Year %3d: %.0f\n", year, pairs(&global_cache, year));
#define SIZE 151

int main (void) {
  int year;
  double global_cache[SIZE];

  for(int i=0; i<SIZE;i++)
  {
	  global_cache[i] = -1;
  }

  for (year =  0; year <=  15; year+=  1) SHOW (year);
  for (year = 20; year <= 150; year+= 10) SHOW (year);
  return 0;
}
