#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int iAns,iGuess,iLow = 1,iLarge = 100,iAttempt = 1;
    puts("This is the Da Vinci Code program. You can guess a number between 1 to 100.");
    puts("The correct answer called the Da Vinci Code. ");
    srand(time(0));
    iAns = (rand()%100)+1;//random number

    puts("Please guess a number : ");
    scanf("%d",&iGuess);//input

    while(1){
        while(iGuess > iLarge || iGuess < iLow){
            printf("Please enter again!! The range of Da Vinci Code is between %d ~ %d.\n",iLow,iLarge);
            scanf("%d",&iGuess);
        }//end while (range check)

        if(iGuess > iAns){
            iLarge = iGuess;
            printf("Your guess number is bigger than Da Vinci Code, the range of Da Vinci Code is between %d ~ %d.\n",iLow,iLarge);
            printf("This is your No.%d attempts. Please guess again : ",iAttempt);
            iAttempt++;
            scanf("%d",&iGuess);
        }//end if (larger)

        else if (iGuess < iAns){
            iLow = iGuess;
            printf("Your guess number is smaller than Da Vinci Code, the range of Da Vinci Code is between %d ~ %d.\n",iLow,iLarge);
            printf("This is your No.%d attempts. Please guess again : ",iAttempt);
            iAttempt++;
            scanf("%d",&iGuess);
        }// end else if (smaller)

        else {
            puts("Bingo!!!");
            puts("Congrats to your hard work!");
            printf("Your total attempts is %d times.",iAttempt);
            break;
        }//end else (equal)


    }//end while (repeat)



    return 0;
}//end main