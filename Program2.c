#include <stdio.h>

int main() {
    float salary, hra, da, ta;
    float hrap, dap, tap, grossSalary;

    
    printf("Enter the base salary: ");
    scanf("%f", &salary);

    
    printf("Enter the percentage of HRA: ");
    scanf("%f", &hra);

    printf("Enter the percentage of DA: ");
    scanf("%f", &da);

    printf("Enter the percentage of TA: ");
    scanf("%f", &ta);

   
    hrap = (hra / 100) * salary;
    dap = (da / 100) * salary;
    tap = (ta / 100) * salary;

  
    grossSalary = salary + hra + da + ta;

    
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}
