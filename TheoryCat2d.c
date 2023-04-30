#include<stdio.h>
#include<string.h>
int main() {
    char car[20];

    printf("Enter car name ");
    fgets(car, 20, stdin);

    int price, extraPrice;
    float disc;


    car[strcspn(car, "\n")] = 0;

    printf("Enter price\n");
    scanf("%d", &price);

    printf("Enter extra fitting price\n");
    scanf("%d", &extraPrice);

    int total = price + extraPrice;

    if (strcmp(car, "Hatchback") == 0) {
        disc = total * 0.03;
    }
    else if (strcmp(car, "Sedan") == 0) {
        disc = total * 0.05;
    }
    else if (strcmp(car, "SUV") == 0) {
        disc = total * 0.1;
    }
    else if (strcmp(car, "MUV") == 0) {
        disc = total * 0.12;
    }

    printf("Total price = %d\n", total);

    printf("Discount = %0.2f\n", disc);

    float gst = (total - disc) * 0.12;

    float net = total - disc + gst;

    printf("Net price %0.2f", net);

}