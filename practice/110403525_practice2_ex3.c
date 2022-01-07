#include <stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",i);
        }//end for j
        printf("\n");
    }//end for i

    printf("--------\n");

    for(int i = 0; i <= 5; i++){
        for(int j = 4; j >= i; j--){
            printf(" ");
        }//end for j
        for(int k = 1; k <= i; k++){
            printf("%d",i);
        }//end for k
        printf("\n");
    }//end for i

}//end main