#include <stdio.h>

int main(){

    int num,ans;    
    puts("This program can calculate a number's factorial.");
    puts("Please input a number : ");
    
    while(1){
        ans = 1;
        scanf("%d",&num);

        if(num < 0){
            puts("Invalid input!The number must be positive interger or 0.");
            puts("Please enter again : ");
        }//end if (num < 0)

        else if(num == 0)printf("factorial of %d is %d\n",num,ans);

        else{
            for(int i = 1; i <= num; i++){
                ans *= i;
            }//end for (calculate factorial)
            printf("factorial of %d is %d\n",num,ans);

            if(num > 12)puts("The number you input is bigger than 12. It'll cause overflow.The answer might be wrong!!");
            puts("You can input another number or press Ctrl+C to quit program.");
            
        }//end else (num > 0)
    }//end while (repeat)


}//end main