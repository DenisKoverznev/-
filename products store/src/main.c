#include "app.h"

int main()
{
	int sz = sizeof(PRODUCT);

	printf("%d\n", sz);

	PRODUCT product = { "Apple ", 22, 10000 };

	print(&product);

	PRODUCT products = { "Banan", 25, 20000 };
	
	return 0;
}

