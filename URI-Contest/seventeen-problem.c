#include<stdio.h>
int main(){
    int total_hour, total_speed, total_distance;
    scanf("%d%d", &total_hour, &total_speed);
    total_distance = total_hour * total_speed;
    double total_spent = total_distance / 12.0;
    printf("%.3lf\n", total_spent);
    return 0;
}