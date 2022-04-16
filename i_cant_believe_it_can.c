/**
*	@file		i_cant_believe_it_can.c
*	@brief		I cant't believe can sort. 
*	@author		新渡戸広明
*	@date		2022/04/17
*	@details	I cant't believe can sort. 
*				ソートできるなんて信じられない。
*				Is this the simplest (and most surprising) sorting algorithm ever?
*				これは、これまでで最もシンプルな（そして最も驚くべき）ソートアルゴリズムなのだろうか？
*				https://arxiv.org/abs/2110.01111
*/

#include	<stdio.h>

#define NUM(a) (sizeof(a)/sizeof(a[0]))

void print_array(int *pa, int n);
void i_cant_believe_it_can(int *pa, int n);
void swap(int *x, int *y);

int main(void)
{	
	int data[] = { 3, 1, 6, 7, 4, 2 };
	
	print_array(data, NUM(data));
	
	i_cant_believe_it_can(data, NUM(data));
	
	print_array(data,  NUM(data));
	
	return 0;
}

void print_array(int *pa, int n)
{
	int		i;
	
	for (i = 0; i < n; i++) {
		printf ("%d ", *(pa + i));
	}
	puts("");
}

void i_cant_believe_it_can(int *pa, int n)
{
	int		i, j;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (*(pa + i) < *(pa + j)) {
				swap(pa + i, pa + j);
			}
		}
	}
}

void swap(int *x, int *y)
{
	if (x != y) {
		*x ^= *y;
		*y ^= *x;
		*x ^= *y;
	}
}
