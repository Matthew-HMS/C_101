#include <stdio.h>

void printarray(int _array[], int _len);
int findMaxNumInArray(int _array[], size_t _size, int *_max, int *_maxindex);
int findMinNumInArray(int _array[], size_t _size, int *_min, int *_minindex);
void swapMaxMinInArray(int _array[], size_t _size, int _maxindex, int _minindex);


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

    findMaxNumInArray(arr,len,&max,&maxindex);
    findMinNumInArray(arr,len,&min,&minindex);

    printf("The maximum number in array is %d\n",max);
    printf("The minimum number in array is %d\n",min);
    
    swapMaxMinInArray(arr,len,maxindex,minindex);
    
    printf("The array after swap is : ");
    printarray(arr,len);

}//end main

void printarray(int _array[], int _len){
    for(size_t i = 0; i < _len-1; i++){
        printf("%d,",_array[i]);
    }//end for (print array)
    printf("%d\n",_array[_len-1]);
}//end printarray

int findMaxNumInArray(int _array[], size_t _size,int *_max, int *_maxindex){
    *_max = _array[0];
    *_maxindex = 0;
    for(size_t i = 1; i < _size; i++){
        if(_array[i] > *_max){
            *_max = _array[i];
            *_maxindex = i;
        }
    }//end for (find maximum)
}//end findMaxNumInArray

int findMinNumInArray(int _array[], size_t _size, int *_min, int *_minindex){
    *_min = _array[0];
    *_minindex = 0;
    for(size_t i = 1; i < _size; i++){
        if(_array[i] < *_min){
            *_min = _array[i];
            *_minindex = i;
        }
    }//end for (find minimum)
}//end findMinNumInArray

void swapMaxMinInArray(int _array[], size_t _size, int _maxindex, int _minindex){
   int hold;
   hold = _array[_maxindex];
   _array[_maxindex] = _array[_minindex];
   _array[_minindex] = hold;
}//end swapMaxMinInArray
