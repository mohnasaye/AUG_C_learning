#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// First question
// Write a C program that reads two integers from the user then displays
// their sum, product, difference, quotient and remainder.
int main(){
    // definition variables to get input from user
    int a,b ;
    // print statement to give the user a hint to input value
    printf("Enter The First Number: \n");
    // input the first value
    scanf("%d", &a);
    // print statement to give the user a hint to input value
    printf("Enter The Second Number: \n");
    // input the second value
    scanf("%d", &b);
    // print the sum for a,b
    printf("The Sum Is: %d \n ",a+b);
    // print the product for a,b
    printf("The Product Is: %d \n ",a*b);
    // print the difference for a,b
    printf("The Difference Is: %d \n ",a-b);
    // print the quotient for a,b
    printf("The Quotient Is: %d \n",a/b);
    // print the reminder for a,b
    printf("The Reminder Is: %d \n ",a%b);
}


// Second question
// Write a C program that displays the numbers 1to 4 on the same line then 5 to
// 10 in a newline.
//int main(){
//    int i = 1;
//    while(i<5){
//        printf("%d ",i);
//        i++;
//    }
//    printf("\n");
//    while(i<10){
//        printf("%d ",i);
//        i++;
//    }
//}

// Third question
// Write a C program that reads two integers from the user then displays the
// larger number followed by the words “is larger.” If the numbers are equal,
// display the message “These numbers are equal.” Use only the single-
// selection form of the if statement
//int main(){
//    // get input from user a, b to compare it later
//    int a, b ;
//    // print statement for user to input first value
//    printf("Enter The First Number \n");
//    // the next line to input the first value
//    scanf("%d", &a);
//    // print statement for user to input second value
//    printf("Enter The Second Number \n");
//    // the next line to input the first value
//    scanf("%d",&b);
//    // start comparing numbers
//    // if value a grater than b, the code will print it
//    if(a>b){
//        printf("%d is grater than %d", a,b);
//    } if(b>a){
//        // if value b grater than a, the code will print it
//        printf("%d is grater than %d ",b,a);
//    }  if(a ==b  ){
//        // if value equal b, the code will print it
//        printf("%d equal %d",a,b);
//    }
//    else {
//        printf("%d isn't equal %d",a,b);
//    }
//}


// Question4
// Write a C program that inputs three different integers from the keyboard,
// then displays the sum, the average, the product, the smallest and the largest
// of these numbers. Use only the single-selection form of the if statement
//int main(){
//    // definition the variables a,b,c for inputs
//    float a,b,c ;
//    // print a statement for user to input the first value
//    printf("Enter The First Number: \n");
//    // get the input for first number from user
//    scanf("%f",&a);
//    // print a statement for user to input the second value
//    printf("Enter The Second Number: \n");
//    // get the input for second number from user
//    scanf("%f",&b);
//    // print a statement for user to input the third value
//    printf("Enter The Third Number: \n");
//    // get the input for third number from user
//    scanf("%f",&c);
//    // print sum and avg and product
//    printf("The Sum is: %f \n The Average is: %f \n The Product is: %f \n ",a+b+c,(a+b+c)/3,a*b*c );
//    // now the compare statements to get the large number on the program
//    if(a>b && a>c){
//        printf("A is the grater");
//    }if(b>a && b>c){
//        printf("B is the grater");
//    }if(c>a && c>b){
//        printf("C is the grater");
//    }else{
//        // when the program can't compare will print the next statement
//        printf("Something won't wrong please try again");
//    }
//
//}


// Question5
// For a circle of radius 2, display the diameter, circumference and area. Use
// the value 3.14 for π. Use the following formulas (r is the radius): diameter =
// 2r, circumference = 2πr and area = πr2.
// Perform each of these calculations inside the printf statement(s) and use the
// conversion specification %f.
//int main(){
//    // definition variables
//    float radius, diameter, circumference, area;
//    // print statement for user to input radius
//    printf("Enter radius of circle: \n");
//    // input radius from user
//    scanf("%f", &radius);
//    // print the operations
//    printf("The Diameter: %f \n  The Circumference: %f \n The Area %f ", 2*radius,2*radius*(22/7),radius*radius*(22/7));
//
//}


// Thank you Dr.Aseel