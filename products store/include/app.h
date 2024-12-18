#pragma once

#include <stdio.h>

struct Product {
	char name[128];
	int price ;
	int expire;
};

typedef struct Product PRODUCT;
typedef struct Product*  PPRODUCT;



void print(PPRODUCT product);

void print_array(PRODUCT product[], int size);
