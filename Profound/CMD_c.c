#include "stdio.h"
#include "conio.h"

int main(int argc, char *argv[] ){
	printf("\n C Code Result : ");
	int i;
	for(i = 0; i < argc;  i++)
		printf("\n %d -> %s", i, argv[i]);
	return 0;
}
