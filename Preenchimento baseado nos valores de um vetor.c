#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a[5], b[5];
	int l;
	//Armazenamento de valores no vetor a
	for(l = 0; l < 5; l++){
		printf("Digite o %i° valor a ser armazenado no vetor: \n", l + 1);
		scanf("%f", &a[l]);
	}
	//Preenchendo o vetor b aplicando condições nos valores do vetor a
	for(l = 0; l < 5; l++){
		if(l == 0){
			b[l] = a[l];
		}
		else if(l % 2 == 0){
			b[l] = (a[l] * 5);
		}
		else{
			b[l] = (a[l] + 5);
		}
	}
	//Exibindo o vetor a 
	printf("\nVetor A\n");
	for(l = 0; l < 5; l++){
		printf("%.1f ", a[l]);
	}
	printf("\n");
	//Exibindo o vetor b
	printf("\nVetor B\n");
	for(l = 0; l < 5; l++){
		printf("%.1f ", b[l]);
	}
	return(0);
}
	
