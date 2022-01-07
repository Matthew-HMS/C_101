#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 6

//prototype
void sort(int _lottoNum[], int _lottoSize);
void printNum(int _arr[], int _size);

int main(void){
    puts("This is a lottery system, which can check whether you are a lucky person!");
    puts("Please enter six number, these number can't repeat and the range is between 1~49.");

    int lottoNum[size],userNum[size];
    for(size_t i = 0; i < size; i++){
        printf("Enter you number %d : ",i+1);
        scanf("%d",&userNum[i]);
        while(userNum[i] < 1 || userNum[i] > 49){
            puts("The number you choose must be within range 1 ~ 49");
            printf("Enter you number %d : ",i+1);
            scanf("%d",&userNum[i]);
        }//end while (range check)
        for(size_t j = 0; j < i; j++){
            if(userNum[i] == userNum[j]){
                puts("You have already input this number. Please choose another number");
                i--;
            }// end while (repeat check)
        }// end for(check valid input)
    }//end for (input user lottery number)

    srand(time(NULL));
    for(size_t i = 0; i < size; i++){
        lottoNum[i] = (rand() % 49) + 1;
        for(size_t j = 0; j < i; j++){
            while(lottoNum[i] == lottoNum[j]){
                lottoNum[i] = (rand() % 49) + 1;
                j = 0;
            }
        }
    }//end random

    printf("Your chosen numbers : ");
    sort(userNum,size);
    printNum(userNum,size);

    printf("Lottery numbers : ");
    sort(lottoNum,size);
    printNum(lottoNum,size);

    int counter = 0;
    int win[6] = {0};
    for(size_t i = 0; i < size; i++){
        for(size_t j = 0; j < size; j++){
            if(lottoNum[i] == userNum[j]){
                win[counter] = lottoNum[i];
                ++counter;
            }
        }
    }

    if(counter != 0){
        printf("Congratulation! You won %d number\n",counter);
        printf("Your winning number : ");
        for(size_t i = 0; i < counter; i++){
            printNum(win,counter);
        }
    }
    else {
        printf("Sorry, it is not your day for playing lotto : (");
    }

}//end main

void printNum(int _arr[], int _size){
    for(size_t i = 0; i < _size-1; i++){
        printf("%d,",_arr[i]);
    }
    printf("%d\n",_arr[_size-1]);
}//end printNum

void sort(int _lottoNum[], int _lottoSize){
    int hold;
    for(size_t i = 0; i < _lottoSize-1; i++){
        for(size_t j = 0; j < _lottoSize-1; j++){
            if(_lottoNum[j] > _lottoNum[j+1]){
                hold = _lottoNum[j];
                _lottoNum[j] = _lottoNum[j+1];
                _lottoNum[j+1] = hold;
            }
        }
    }
}//end sort

