#include <stdio.h>
int main()
{
	int num;
	printf("Escribe un n�mero\n");
	//Atenci�n: con scanf el nombre de la //variable debe ir precedido de & 
	scanf("%i", &num);
	printf("Has escrito el n�mero %i\n", num);
	return 0;
}
