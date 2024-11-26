#include <stdio.h>
//Maria Luiza de Matos Ribeiro
int main() {
	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	if (num1 > num2) {
		printf("O maior numero entre %d e %d e: %d\n", num1, num2, num1);
	} else {
		printf("O maior numero entre %d e %d e: %d\n", num1, num2, num2);
	}
	return 0;
	
}