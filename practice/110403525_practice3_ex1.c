#include <stdio.h>

void swap(int *_num1,int *_num2);
void printarray(int _array[], int _len);

int main(void){

    int len,max,min,maxindex,minindex;
    puts("Please enter the length of array : ");
    scanf("%d",&len);

    int arr[len];
    for(size_t i = 0; i < len; i++){
        printf("Input a number to array[%d] : ",i);
        scanf("%d",&arr[i]);
        for(size_t j = 0; j < i; j++){
            while(arr[i] == arr[j]){
                printf("The number in array can't repeat. Please input again : ");
                scanf("%d",&arr[i]);
                j = 0;
            }
        }//end for (check not repeat)
    }//end for (input array)

    printf("The original array is : ");
    printarray(arr,len);

    max = arr[0];
    maxindex = 0;
    for(size_t i = 1; i < len; i++){
        if(arr[i] > max){
            max = arr[i];
            maxindex = i;
        }
    }//end for (find maximum)

    min = arr[0];
    minindex = 0;
    for(size_t i = 0; i < len; i++){
        if(arr[i] < min){
            min = arr[i];
            minindex = i;
        }
    }//end for (find minimum)

    printf("The maximum number in array is %d\n",max);
    printf("The minimum number in array is %d\n",min);
    
    swap(&arr[maxindex],&arr[minindex]);
    printf("The array after swap is : ");
    printarray(arr,len);

}//end main

void swap(int *_num1,int *_num2){
    int hold;
    hold = *_num1;
    *_num1 = *_num2;
    *_num2 = hold;
}//end swap

void printarray(int _array[], int _len){
    for(size_t i = 0; i < _len-1; i++){
        printf("%d,",_array[i]);
    }//end for (print array)
    printf("%d\n",_array[_len-1]);
}//end printarray