#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void gerarNumeros(int array[], int n){
	int i;
	srand((unsigned)time(NULL));
	for(i = 0; i < n; i++){
		array[i] = rand() % 10+1;
	}
}

void listarNumeros(int array[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Pos %2.d: %d\n", i+1, array[i]);
	}
	printf("-------------\n");
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, temp, *array, n;
	
	printf("Informe a quantidade de elementos desejada: ");
	scanf("%d", &n);
	
	array = (int *)malloc(n*sizeof(int));
	
	printf("\nNúmeros Aleatórios:\n");
	gerarNumeros(array, n);
	
	listarNumeros(array, n);
	system("pause");
	
	i=0;
	
	while(i < n){
		if(i == 0 || array[i-1] <= array[i]){
			i++;
		}else{
			printf("\nTroca nas posições %d (%d) e %d (%d)\n", i, array[i-1], i+1, array[i]);
			
			temp = array[i-1];
			array[i-1] = array[i];
			array[i] = temp;
			i = i - 1;
			
			listarNumeros(array, n);
			system("pause");
		}
	}
	
	printf("\nNúmeros Ordenados:\n");
	listarNumeros(array, n);
	
	return 0;
}
