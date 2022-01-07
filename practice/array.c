#include <stdio.h>
#define size 5

void modifyArray(int _array[], int _arraysize);
void printArray(int _array[], int _size);

int main(void){
    
    int array[size] ;
    printArray(array,size);
    
    


}//end main

void modifyArray(int _array[], int _arraysize){
    for(size_t i=0; i< _arraysize; i++){
        _array[i] += 2;
    }
}

void printArray(int array[], int _size){
    for(size_t i=0; i < size; i++){
        printf("%d ",array[i]);
    }
}