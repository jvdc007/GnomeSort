#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void gerarNumeros(int array[], int n){
	int i;
	for(i = 0; i < n; i++){
		array[i] = rand() % 10+1;
	}
}

void listarNumeros(int array[], int n){
	int i;
	printf("\nNúmeros Aleatórios:\n");
	for(i = 0; i < n; i++){
		printf("Pos %2.d: %d\n", i+1, array[i]);
	}
	printf("-------------\n");
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Informe o número de elementos: ");
	scanf("%d", &n);
	
	int *array = (int *)malloc(n*sizeof(int));
	gerarNumeros(array, n);
	listarNumeros(array, n);
	
	return 0;
}
