#include <stdio.h>

// หา bmi
// m/h^2

int main(void){

    float m; // 52
    float H; // 163

    printf("enter mass (kg)>>");
    scanf("%f",&m);

     printf("enter hight (cm)>>");
    scanf("%f",&H); 

    H=H/100;

    float bmi =m/(H*H) ; // สูตร

    printf("mass = %.0f \nhigh = %.0f \nbmi = %.0f cm \nBMI = %.2f \n" , m , H*100 ,bmi ) ;

    if (bmi < 18){
        printf("under weight");
    }else if(bmi >=18 && bmi <= 25){
        printf("normai weight");
    }else if(bmi >=25 && bmi <= 30){    
        printf("Overweight");
    }else if(bmi >= 30 ){
        printf("obese");
    }

    return 0;
        
}

    