/* fopen example */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE * pF;
	pF = fopen_s("myfile.txt", "w");
	char nombre[100];

	

	for (int i = 0; i < 5; i++){
		printf("Introduce una palabra: ");
		scanf_s("%s", nombre,100);
		fputs(nombre, pF);
		fputs("\n", pF);

	}
	printf("\n El archivo se ha creado.");
	fclose(pF);

	system("pause");
	return 0;

}