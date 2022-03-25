#include "bubble.h"


void Initialize(Vector *v){
	
	//Porque 42? Leia o guia definitivo do mochileiro das galáxias :).
	srand(42); 
    
    v->itens = (int*)malloc(MAXSIZE*sizeof(int));
	for(int i=0; i<MAXSIZE; i++)
		v->itens[i] = rand()%100;
	v->swap = 0;
}

void Swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void Imprime(Vector *v){
	for(int i=0; i<MAXSIZE; i++)
		printf("%d\t", v->itens[i]);
	printf("\n");
}


void RecursiveBubbleSort(Vector *v, int n){
	
	if (n <= 0)
		return;

	for(int i=0; i<n; i++)
		if(v->itens[i] > v->itens[i+1]){
			Swap(&v->itens[i], &v->itens[i+1]);
			v->swap ++;
		}

	Imprime(v);
	RecursiveBubbleSort(v, n-1);
}

void InterativeBubbleSort(Vector *v) {
    
    for(int i=1; i<MAXSIZE; i++){ 
        for(int j=0; j<MAXSIZE-i; j++) 
            if(v->itens[j] > v->itens[j+1]){
				Swap(&v->itens[j], &v->itens[j+1]);
				v->swap ++;
			}

		Imprime(v);
	}
	
}



