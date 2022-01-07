#include <stdio.h>

int main(){

    char option;
    int _length,_column,rows;

    puts("Please select an option you want.");
    
    while(1){
        puts("1. Numbering pattern \n2. Number triangle\n3. Xmas tree\n4. End program");
        printf("Select an option : ");
        scanf("%s",&option);
        if(option == '1'){

            printf("Please input the length of the sequence : ");
            scanf("%d",&_length);
            printf("Please input the number of columns per row : ");
            scanf("%d",&_column);
            
            for(int i = 1; i <= _length; i++){
                if(i < 10)printf(" ");
                printf("%d ",i);
                if(i % _column == 0)printf("\n");
            }//end for (print)
            printf("\n");
        }//end if (option == 1)

        else if(option == '2'){
            puts("Please enter number of rows : ");
            scanf("%d",&rows);
            for(int i = 1; i <= rows; i++){
                if(i < 10){
                    
                    for(int l = rows-9; l >= 1; l--){
                        printf(" ");
                    }
                }
                if(i >= 10 && i < rows){
                    for(int m = rows-i; m >= 1; m--){
                        printf(" ");
                    }

                }
                
                for(int j = rows-1; j >= i; j--){
                    printf("  ");
                }
                for(int k = i; k >= 1; k--){
                    printf("%d ",k);
                }
                for(int k = 2; k <= i; k++){
                    printf("%d ",k);
                }
                printf("\n");
            }
            printf("\n");
        }//end else if (option == 2)

        else if(option == '3'){
            puts("Please enter number of rows : ");
            scanf("%d",&rows);
            for(int i = 1; i <= rows; i++){
                for(int j = rows-1; j >= i; j--){
                    printf(" ");
                }
                for(int k = 1; k <= 2*i-1; k++){
                    printf("*");
                }
                
                printf("\n");
            }//end print(*)
            for(int i = 1; i <= 2; i++){
                for(int i = 1; i <= rows-1; i++){
                printf(" ");
                }
                printf("*\n");
            }
            for(int i = 1; i <= rows-2; i++){
                printf(" ");
            }
            printf("***");
            printf("\n");
        }//end else if (option == 3)

        else if(option == '4')break;

        else puts("Invalid input. You have only four option.");
    }//end while (repeat)
    puts("quit program!");

}//end main

