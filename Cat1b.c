#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    char position[50];
    int day;
    int month;
    int year;

};


void display(struct Employee employees[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Position: %s\n", employees[i].position);
        printf("Date of Joining: %d/%d/%d\n\n", employees[i].day, employees[i].month, employees[i].year);
    }
}

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Position: ");
        scanf("%s", employees[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &employees[i].day, &employees[i].month, &employees[i].year);
    }
    struct Employee temp;
    int h, j;
    for (h = 0; h < n - 1; h++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(employees[h].name, employees[j].name) > 0) {
                temp = employees[h];
                employees[h] = employees[j];
                employees[j] = temp;
            }
        }
    }
    printf("\nEmployee List sorted by name:\n\n");
    display(employees, n);

    int z, x;
    for (z = 0; z < n - 1; z++) {
        for (x = z + 1; x < n; x++) {
            if (employees[z].year > employees[x].year ||
                (employees[z].year == employees[x].year &&
                    (employees[z].month > employees[x].month ||
                        (employees[z].month == employees[x].month &&
                            employees[z].day > employees[x].day)))) {
                temp = employees[z];
                employees[z] = employees[x];
                employees[x] = temp;
            }
        }
    }
    printf("\nEmployee List sorted by date of joining:\n\n");
    display(employees, n);
    return 0;
}