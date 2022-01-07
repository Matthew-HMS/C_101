#include <stdio.h>

int main(void){
    int option;
    int length,column,rows;

    puts("Please select an option you want.");

    while(1){
        puts("1. Numbering pattern \n2. Number triangle\n3. Xmas tree\n4. End program");
        printf("Select an option : ");
        scanf("%d",&option);

        switch (option){
        case 1:
            printf("Please input the length of the sequence (max 5 digits) : ");
            scanf("%d",&length);
            printf("Please input the number of columns per row : ");
            scanf("%d",&column);
            pattern(length,column);
            break;

        case 2:
            puts("Please enter number of rows : ");
            scanf("%d",&rows);
            triangle(rows);
            break;

        case 3:
            puts("Please enter number of rows : ");
            scanf("%d",&rows);
            tree(rows);
            break;
        
        case 4:
            break;
        
        default:
            puts("Invalid input! Please enter again : ");
            break;
        
        }//end switch
        if(option == 4){
            puts("End program!");
            break;
        }//end if

    }




}

void pattern(int _length,int _column){

    
    for(int i = 1; i <= _length; i++){
        printf("%5d ",i);
        if(i % _column == 0)printf("\n");
    }//end for (print)
    printf("\n");

}

void triangle(int _rows){
    for(int i = 1; i <= _rows; i++){
        if(i < 10){
                    
            for(int l = _rows-9; l >= 1; l--){
                printf(" ");
            }
        }
        if(i >= 10 && i < _rows){
            for(int m = _rows-i; m >= 1; m--){
                printf(" ");
            }

        }
                
        for(int j = _rows-1; j >= i; j--){
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
}

void tree(int _rows){
    for(int i = 1; i <= _rows; i++){
        for(int j = _rows-1; j >= i; j--){
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++){
            printf("*");
        }
                
        printf("\n");
    }//end print(*)
    for(int i = 1; i <= 2; i++){
        for(int i = 1; i <= _rows-1; i++){
        printf(" ");
        }
        printf("*\n");
    }
    for(int i = 1; i <= _rows-2; i++){
        printf(" ");
    }
    printf("***");
    printf("\n");
}