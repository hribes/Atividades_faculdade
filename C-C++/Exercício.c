//1. Preencher um vetor com 10 posições de dados inteiros e informar a soma desses vetores.
//2. Ler 5 valores reais e escrevê-los na ordem inversa da leitura
//3. Ler valores para um vetor de inteiros com tamanho 30, até que o usuário digite o valor 0 ou até que sejam lidas todas as posições. Por fim, o programa deve informar os valores lidos
//4. Ler uma palavra e informar quantas consoantes e quantas vogais ela possui. Para saber o tamanho da string, utilize a função `strlen()` da biblioteca `string.h`

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
	int vetor[10], soma=0;
	for (int col=0;col<10;col++){
		printf("\nAdicione um valor: ");
		scanf("%d", &vetor[col]);
		soma = soma + vetor[col];
	}
	printf("A soma desses números é: %d", soma);
}

void main(){
	float valores[5];
	for (int val = 0; val < 5; val++){
		scanf("%f", &valores[(5-val)]);
	} 
	for (val = 0; val < 5; val++){
		printf("%f",valores[val]);
	}
}

void main(){
	int vetor[30], num = 0;
	do{
		scanf("%d", &vetor[num]);
		num++;
	}while(num != 30 || vetor[num] != 0);
	for (val = 0; val < num; val++){
		printf("%d", vetor[val]);
	}


void main() {
    char palavra[100];
    int i, comprimento;
    int vogais = 0, consoantes = 0;
    // Leitura
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    // comprimento da palavra
    comprimento = strlen(palavra);
    // Contagem de vogais e consoantes
    for(i = 0; i < comprimento; i++) {
        char ch = tolower(palavra[i]); // Converte para minúsculo para facilitar a comparação
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vogais++;
        } else if (ch >= 'b' && ch <= 'z') {
            consoantes++;
        }
    }
    printf("A palavra '%s' tem %d vogal(is) e %d consoante(s).\n", palavra, vogais, consoantes);
}
