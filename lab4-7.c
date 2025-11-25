#include <stdio.h>
float mass(int w,int h);

void main(void){
    int w,h;
    printf("Enter Weight:");
    scanf("%d",&w);
    printf("Enter Height:");
    scanf("%d",&h);
    printf("mass=%.4f", mass(w,h));
}

float mass(int w, int h){
    float m = w/(h*h);
    return m;
}