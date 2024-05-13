#include <stdio.h>

int main() {
    float basicSalary, hraPercentage, daPercentage, taPercentage;
    float hra, da, ta, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter percentage of HRA: ");
    scanf("%f", &hraPercentage);

    printf("Enter percentage of DA: ");
    scanf("%f", &daPercentage);

    printf("Enter percentage of TA: ");
    scanf("%f", &taPercentage);

    hra = basicSalary * hraPercentage / 100;
    da = basicSalary * daPercentage / 100;
    ta = basicSalary * taPercentage / 100;

    grossSalary = basicSalary + hra + da + ta;

    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}

