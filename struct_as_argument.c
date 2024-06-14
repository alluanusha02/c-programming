#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price;
};

float calculateTotalAmount(struct Item items[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += items[i].quantity * items[i].price;
    }
    return total;
}

int main() {
    int n;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for item %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Price: ");
        scanf("%f", &items[i].price);
    }

    float totalAmount = calculateTotalAmount(items, n);

    printf("Total amount: %.2f\n", totalAmount);

    return 0;
}
