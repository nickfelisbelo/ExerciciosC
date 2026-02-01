#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int num[5];
    int i;
    int par = 0, impar = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }
    for(i = 5; i > 0; i--){
    	printf("%d", num[i]);
	}
    return 0;
}

