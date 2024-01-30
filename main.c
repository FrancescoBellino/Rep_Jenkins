#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int numero;
	printf("Inserire un numero intero: ");
	scanf("%d", &numero);
	if(numero%2==0){
		printf("Il numero inserto è pari\n");
	}else{
		printf("Il numero inserito è dispari\n");
	}

	return 0;
}
