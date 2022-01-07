#include <stdio.h>

int main(){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("1");
        }//end for j
        printf("\n");
    }//end for i

    printf("--------\n");

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            printf("%d",i);
        }//end for j
        printf("\n");
    }//end for i



}//end main