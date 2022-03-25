#ifndef BUBBLE_H 
#define BUBBLE_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 10


typedef struct Vector Vector;

struct Vector{
	int *itens;
	int tam;
	int swap;
};

void Initialize(Vector *v);
void Imprime(Vector *v);
void Swap(int *a, int *b);
void RecursiveBubbleSort(Vector *v, int n);
void InterativeBubbleSort(Vector *v);

#endif