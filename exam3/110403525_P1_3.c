#include <stdio.h>
#include <stdlib.h>

//====function prototypes===============================
// You may implement additional functions but may not modify the existing function prototypes.

int Binomial(int _m, int _n); //You must use recursion to implement this function
int countOfNumber(int _n , int _targetNumber);
int factorial(int _n);
int findNum(int _n, int _target);
    /*
    Ex 1: n = 20, _targetNumber = 5 
    範圍從1 到 n=20，要找範圍內的數字有'5'的總量，範圍內有'5'的數字有5跟15，因此範圍內有兩個'5'，所以countOfNumber最後要 return 2
    
    Ex 2: n = 33, _targetNumber = 3 
    範圍從1 到 n=33，要找範圍內的數字有'3'的總量，範圍內有'3'的數字有 3,13,23,30,31,32,33，因此範圍內有八個'5'，所以countOfNumber最後要 return 8  
    */
//=====================================================

int main(void){
    int option = 0,m,n,ans,target;
    enum {binomial = 1,count,end};
    while(option != 3){
    
    puts("Please select the function you want to do.");
    puts("1. Binomial coefficient\n2. Count of number\n3. End program");
    scanf("%d",&option);

    switch(option){
        case binomial:

        puts("Binomial coefficient");
        puts("Please input m and n to calculate C(m,n).");
        scanf("%d%d",&m,&n);
        ans = Binomial(m,n);
        printf("When m is %d, n is %d\nThe Binomial coe. is %d\n",m,n,ans);
        break;


        case count:

        puts("Count of number");
        puts("Please enter the range of the number.");
        scanf("%d",&n);
        do{
            puts("Please enter the number(0 ~ 9) you want to count.");
            scanf("%d",&target);
        }while(target < 0 || target > 9);
        printf("The range from 1~%d\n",n);
        ans = countOfNumber(n,target);
        printf("The total number of '%d' inclusions : %d\n",target,ans);
        break;

        case end:
        puts("End program!");
        break;

        default:
        puts("Invalid input!! Please enter again!");
        break;
    }// end switch
    
    }// end while
} // end main

int Binomial(int _m,int _n){
    int t;
    if(_n >_m){
        t = _n;
        _n = _m;
        _m = t;
    }
    return factorial(_m) / (factorial(_n) * factorial(_m - _n));
}// end Binomial

int factorial(int _n){
    if(_n == 0 || _n == 1)return 1;
    else return _n * factorial(_n-1);
}// end factorial

int countOfNumber(int _n , int _targetNumber){
    int counter = 0;
    for(size_t i = 1; i <= _n; i++){
        counter += findNum(i,_targetNumber);
    }// end for
    printf("\n");
    return counter;
}// end countOfNumber

int findNum(int _n, int _target){
    int num = _n,counter = 0;
    while(num > 0){
        if(num % 10 == _target)++counter;
        num /= 10;
    }
    if (counter != 0)printf("%d ",_n);
    return counter;
}//end findNum