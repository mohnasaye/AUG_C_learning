//
// Created by Mohamed Ayesh on 04/11/2022.
//
#include <stdio.h>


// Question2
// Write a C program that displays the numbers 1to 4 on the same line then 5 to
// 10 in a newline.

int main(){
    int i = 1;
    while(i<5){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    while(i<10){
        printf("%d ",i);
        i++;
    }
}
