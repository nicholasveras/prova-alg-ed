#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int contador;
	
	printf("\n Digite um valor:");
	scanf("\n %d",&contador);
	
	for(contador;contador >= 1;contador--)
	{
		printf("%d ", contador);
	}
	return 0;
}