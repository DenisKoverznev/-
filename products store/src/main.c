#include "app.h"

int main()
{
	PRODUCT products[] = {
		{"Apple", 100, 30},
		{"Banan", 200, 15},

	};

	int size = sizeof(products) / sizeof(products[0]);

	print_array(products, size);

	return 0;
}


