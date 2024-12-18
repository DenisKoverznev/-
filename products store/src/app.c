#include "app.h"

void print( PPRODUCT product)
void print_array(PRODUCT product[], int size);
{
	printf("name=%s\n", product->name);
	printf("price=%d\n", product->price );
	printf("expire=%d\n", product->expire);

	print_array("name=%s\n", product->name);
	print_array("price=%d\n", product->price);
	print_array("expire=%d\n", product->expire);

}