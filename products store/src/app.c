#include <app.h>
void print(PRODUCT* product) {
        printf("name = %s\n", product->name);
        printf("price = %d\n", product->price);
        printf("expire = %d\n", product->expire);
}
    
void print_array(PRODUCT product[], int size) {
        for (int i = 0; i < size; i++) {
            print("Product %d:\n", i + 1);
            print(&product[i]);
        }
}
