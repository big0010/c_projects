#include <stdio.h>

void main(void){
    cher gender;
    printf("Enter Gender:");
    scanf("%c", &gender);

    switch(gender){
    case 'm': printf("Male");
              break;
    case 'f': printf("Female");
              break;
    case 'M': printf("Male");
              break;
    case 'F': printf("invalid Valus");          
    }

    return 0;

}



