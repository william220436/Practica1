/* Ordenamiento de vector: por metodo de la burbuja*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int vector[30], aux;
	for(int i=0;i<30;i++){
		vector[i]=1+rand()%(99-1+1);
	}
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			if(vector[j]>vector[j+1]){
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
	printf("\n");
	for(int i=0;i<30;i++){
		printf("%i ", vector[i]);
	}
	printf("\n");
	for(int i=29;i>=0;i--){
		printf("%i ", vector[i]);
	}
	
	
	
	return 0;
}
