#include <stdio.h>
int main(){

    int grade;
    int aGrade,bGrade,cGrade,dGrade,fGrade = 0;

    while((grade = getchar()) != EOF){
        puts("Please enter your grade.");

        switch(grade){
            case 'A':
            case 'a':
            aGrade++;
            break;

            case 'B':
            case 'b':
            bGrade++;
            break;

            case 'C':
            case 'c':
            cGrade++;
            break;

            case 'D':
            case 'd':
            dGrade++;
            break;

            case 'F':
            case 'f':
            fGrade++;
            break;
        }
    }



    return 0;
}