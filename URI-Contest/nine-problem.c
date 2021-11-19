#include<stdio.h>
int main(){
    char name[20];
    double fixed_salary, total_sales, total_salary;
    scanf("%s %lf %lf", &name, &fixed_salary, &total_sales);
    total_salary = fixed_salary + (total_sales * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}