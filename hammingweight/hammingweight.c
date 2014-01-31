/*************************************************************************
    > File Name: hammingweight.c
    > Author: guanxyz
    > Mail: guanxyz@hotmail.com 
    > Created Time: Fri Jan 31 16:07:14 2014
 ************************************************************************/
/*
  Func: compute the hamming weight of a 32bits input
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int hammingweight(uint32_t num){
  int i = 0;
  uint32_t mask = 0;
  int count = 0;
  for(i=0; i<32; i++){
    mask = 1<<i;
    if(mask & num)
	count++;
  }
  return count;
}

int main(int argc, char ** argv){
  uint32_t num; 

  srand(time(NULL));

  num = rand();
  printf("The hamming weight of %u  is %d\n", num, hammingweight(num));
  
}

