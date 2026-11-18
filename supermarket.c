//product information

#include <stdio.h>
#include <string.h>

struct Product {
	int productcode;
    char productname[50];
    float unitprice;
    int quantity;
};

int main()
{
    float total;
    struct Product products;

    printf("Enter product code: ");
    scanf("%d", &products.productcode);

    printf("Enter product name: ");
    scanf("%49s", products.productname);

    printf("Enter unit price: ");
    scanf("%f", &products.unitprice);

    printf("Enter quantity in stock: ");
    scanf("%d", &products.quantity);

    total = products.unitprice * products.quantity;


    printf("Product code: %d\n", products.productcode);
    printf("Product name: %s\n", products.productname);
    printf("Unit price: %.2f\n", products.unitprice);
    printf("Quantity in stock: %d\n", products.quantity);
    printf("Total stock value: %.2f\n", total);

    return 0;
}