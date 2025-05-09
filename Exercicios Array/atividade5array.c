#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	int num[10];
	printf("Digite 10 números:\n");
	int i;
	for(i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	printf("Digite um dos números digitados anteriormente:  ");
	int escolha;
	scanf("%d", &escolha);
	for(i = 0; i < 10; i++) {
		if(escolha == num[i]) {
		     printf("%d foi o %dº número a ser escolhido", escolha, i+1 );
		}
	}
	return 0;
}