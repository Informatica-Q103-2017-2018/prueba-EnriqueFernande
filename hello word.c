#include <stdio.h>
int main()
{
	int num;
	printf("Escribe un número\n");
	//Atención: con scanf el nombre de la //variable debe ir precedido de & 
	scanf("%i", &num);
	printf("Has escrito el número %i\n", num);
	return 0;
}
