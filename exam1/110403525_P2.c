#include <stdio.h>

int main(){

    int iNum,iCounter = 0;
    
    puts("Please input a number from 1 to 1000. The program can help you to determine whether it's a prime number. ");
    puts("And please DO NOT input string, or the program will collapse.");
    puts("You can keep input numbers, when you're tired, press Ctrl+C to quit program.");
    
    while(1){

    iCounter = 0;
    scanf("%d",&iNum);
    
    while(iNum < 1 || iNum > 1000 ){
        puts("It's not a valid input !! The number must from 1 to 1000. Please enter again !!");
        scanf("%d",&iNum);
    }//end while (range check)

    printf("%d has factors : ",iNum);

    for(int i=1;i<=iNum;i++){
        if(iNum%i == 0){
            iCounter++;
            printf("%d ",i);
        }//end if
    }//end for

    if(iCounter == 2){
        printf(". You're right ! %d IS a prime number. It has %d factors.\n",iNum,iCounter);
    }//end if (prime number)

    else {
        printf(". NO NO NO ! %d is NOT a prime number. It has %d factors.\n",iNum,iCounter);
    }//end else (not prime)

    }//end while (repeat)




    return 0;
}//end main