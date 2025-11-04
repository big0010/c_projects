#include <stdio.h>

// หา bmi
// m/h^2

int main(void){

    float m; // 52
    float H; // 163

    printf("enter mass (kg)>>");
    scanf("%a",&M);

     printf("enter hight (cm)>>");
    scanf("%a",&H); 

    H=H/100;

    float bmi =m/H*H ; // สูตร

    printf("mass = %.0f \nhigh = %.0f \nbmi = %.0f cm \nBMI = %.2f" , M , H*100 ,bmi ) ;
}