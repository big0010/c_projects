#include <stdio.h>
void main(void){
     int i,r;
     printf("Enter current:");
     scanf("%d",&i);
     printf("Enter resistance:");
     scanf("%d",&r);
     volt(i,r);
//   volt(5, 10);
    //
}

void volt(int i, int r){
int ans = i*r;
printf("answer = %d\n", ans);
}