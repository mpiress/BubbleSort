#include "bubble.h"

int main(){
	
	Vector v;
	
	printf("MÉTODO RECURSIVO!\n");
	Initialize(&v);
	Imprime(&v);
	printf("\n");
	RecursiveBubbleSort(&v, MAXSIZE);
	printf("NUMBER OF SWAPS:%d\n", v.swap);
	
	
	printf("\nMÉTODO INTERATIVO!\n");
	Initialize(&v);
	Imprime(&v);
	printf("\n");
	InterativeBubbleSort(&v);
	printf("NUMBER OF SWAPS:%d\n", v.swap);
	
	return 0;
}
