#include<stdio.h>
#include<windows.h>

int main(){
    while(1){

    //explanation
    printf("This program can convert the tempature into different form based on your choice.\n");
    printf("Please enter 1,2 or 0 to choose the option you want.\n");

    //options
    printf("0: quit program\n");
    printf("1: Celsius to Fahrenheit \n");
    printf("2: Fahrenheit to Celsius\n");

    //input option
    int option;
    float ctemp,ftemp;
    scanf("%d",&option);
    
    //prevent enter wrong option
    while(option != 1 && option != 2 && option != 0){
        printf("Please enter only 1 or 2\n");
        scanf("%d",&option);
    }//end while

    //convert temperature
    if(option == 0)break;
    if(option == 1){
        printf("Please enter Celsius degree : ");
        scanf("%f",&ctemp);
        printf("When Celsius degrees is %.1f, the Fahrenheit degrees is %.1f. And Kelvin degrees is %.1fK.\n",ctemp,ctemp*9/5 +32,ctemp+273.15);
    }// end if (C to F)

    else if(option == 2){
        printf("Please enter Fahrenheit degree : ");
        scanf("%f",&ftemp);
        printf("When Fahrenheir degree is %.1f, the Celsius degree is %.1f. And Kelvin degree is %.1fK.\n",ftemp,(ftemp-32)*5/9,(ftemp+459.67)*5/9);
    }// end else if (F to C)

    printf("\n");
    Sleep(3000);
    }//end while (repeat)

} //end function main
