#include <stdie.h>

void main(void){
    float area;
    int base = 5;
    int high = 10;
    printf("enter base:");
    scanf("%d", &base);
    printf("enter base:");
    scanf("%d", &high);
    area = 0.5*base*high;
    //printf ("base = %d \n", base);
    //printf ("high = %d \n", high);
    //printf ("area = %.2f \n", area);
   printf("base = %d \nhigh = %d \narea = %.3f\n", base, high, area);
}