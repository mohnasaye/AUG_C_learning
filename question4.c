//
// Created by Mohamed Ayesh on 04/11/2022.
//

#include <stdio.h>


// Question4
// Write a C program that inputs three different integers from the keyboard,
// then displays the sum, the average, the product, the smallest and the largest
// of these numbers. Use only the single-selection form of the if statement

int main(){
    // definition the variables a,b,c for inputs
    float a,b,c ;
    // print a statement for user to input the first value
    printf("Enter The First Number: \n");
    // get the input for first number from user
    scanf("%f",&a);
    // print a statement for user to input the second value
    printf("Enter The Second Number: \n");
    // get the input for second number from user
    scanf("%f",&b);
    // print a statement for user to input the third value
    printf("Enter The Third Number: \n");
    // get the input for third number from user
    scanf("%f",&c);
    // print sum and avg and product
    printf("The Sum is: %f \n The Average is: %f \n The Product is: %f \n ",a+b+c,(a+b+c)/3,a*b*c );
    // now the compare statements to get the large number on the program
    if(a>b && a>c){
        printf("A is the grater");
    }if(b>a && b>c){
        printf("B is the grater");
    }if(c>a && c>b){
        printf("C is the grater");
    }else{
        // when the program can't compare will print the next statement
        printf("Something won't wrong please try again");
    }

}
