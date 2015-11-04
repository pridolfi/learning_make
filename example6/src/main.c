#include "stdio.h"

#include "suma.h"
#include "resta.h"

int main(void)
{
	printf("hola!!! suma: %d\n", suma(1, -7));
	printf("la macro vale %d\n", MACRO);
	printf("resta: %d\n", resta(1, 6));
	return 0;
}
