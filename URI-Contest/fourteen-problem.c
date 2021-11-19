#include<stdio.h>
int main(){
    int X;
    float Y, avg;
    scanf("%d", &X);
    scanf("%f", &Y);
    printf("%.3f km/l\n", X / Y);
    return 0;
}