#include<stdio.h>
int main(){
    int emp, hour;
    double salary_per_hour, total_salary;
    scanf("%d %d %lf", &emp, &hour, &salary_per_hour);
    total_salary = hour * salary_per_hour;
    printf("NUMBER = %d\n", emp);
    printf("SALARY = U$ %.2lf\n", total_salary);
    return 0;
}