//1. Ler uma matriz 4x3 de números reais e informar qual é o maior valor lido
//2. Ler uma matriz quadrada de ordem 5 e informar a soma dos elementos da diagonal principal. (quando o i é igual ao valor de j)https://mundoeducacao.uol.com.br/matematica/matriz-quadrada.htm
//3. Ler uma matriz 5x6 de valores inteiros, multiplicá-la por 4 e exibir o resultado.

#include <stdio.h>

void main(){
	int matriz[4][3], maior;

	printf("Digite o primeiro valor da matriz: ");
	scanf("%d", &matriz[0][0]);
	maior = matriz[0][0];
	for (int val=0; val<4;val++){ //linha
		for (int col=1; col<4;col++){ //coluna
			printf("Digite o valor da coluna %d, linha %d: ", col, val);
			scanf("%d", &matriz[val][col]);
			if (matriz[val][col] > maior){
				maior = matriz[val][col];
			}
		}
	}
	
}

void main(){
	int matriz[5][5], soma = 0;
	for (int lin=0; lin<5;lin++){
		for (int col=0; col<5;col++){
			scanf("%d", &matriz[lin][col]);
			if (lin == col){
				soma = soma + matriz[lin][col];
			}
		}
	}
	printf("A soma da diagonal principal eh: ", soma);
	
}

void main(){
	int matriz[5][5], mult;
	for (int lin=0; lin<5;lin++){
		for (int col=0; col<5;col++){
			scanf("%d", &matriz[lin][col]);
			matriz[lin][col] = matriz[lin][col] * 4;
		}
	}
	for (int lin=0; lin<5;lin++){
		for (int col=0; col<5;col++){
			if (col == 5){
				printf("%d\n", matriz[lin][col]);
			}else
			printf("%d", matriz[lin][col]);
		}
	}
}
