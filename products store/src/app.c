#include "app.h"

void print_array(PRODUCT product[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Product %d:\n", i + 1);
        printf("  name = %s\n", product[i].name);
        printf("  price = %d\n", product[i].price);
        printf("  expire = %d\n", product[i].expire);
    }
}

int main() {
    PRODUCT product1 = { "Apple", 100, 30 };
    PRODUCT product2 = { "Banana", 200, 15 };

    PRODUCT products[] = { product1, product2 };
    int size = sizeof(products) / sizeof(products[0]);

    // Вывод одного продукта
    print(&product1);

    // Вывод массива продуктов
    print_array(products, size);

    return 0;
}
