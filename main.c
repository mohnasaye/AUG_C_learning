#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//int main() {
//
//    int num1;
//    int num2 ;
//    printf("Enter First Number: \n");
//    scanf("%d",&num1);
//    printf("Enter Second Number: \n");
//    scanf("%d",&num2);
//   char operation;
//    printf("Enter The Operation \n");
//    printf("1.+ \n");
//    printf("2.* \n");
//    printf("3./ \n");
//    printf("4.- \n");
//    scanf(" %c",&operation);
//    int res;
//    switch (operation) {
//        case '+':
//            res = num1+num2;
//            printf("%d \n",res);
//            break;
//        case '*':
//            res = num1*num2;
//            printf("%d \n",res);
//            break;
//        case '/':
//            res = num1/num2;
//            printf("%d \n",res);
//            break;
//        case '-':
//            res = num1-num2;
//            printf("%d \n",res);
//            break;
//        default:
//            printf("Error! please write a valid operator\n");
//    }
//    printf("Thank's you For Using Our Calculator \n");
//    return 0;
//}
//


//
//int main(){
//    int w;
//    float  bmi,h;
//    printf ("Enter your weight: \n ");
//    scanf ("%d", &w);
//    printf ("Enter your height: \n ");
//    scanf ("%f", &h);
//    bmi= w/(h*h);
//    printf ("Your BMI is: %f \n",bmi);
//    if (bmi<20){
//        printf ("You have to eat more! \n");}
//    else if (bmi>=20 && bmi<25){
//        printf ("You are perfect! \n");}
//    else if (bmi>=25 && bmi<30){
//        printf ("You have to eat less \n");}
//    else if (bmi>= 30){
//        printf("You are over weighted! \n");}
//}
//

//int main(){
//    int x,y;
//    printf("Enter x \n");
//    scanf("%d",&x);
//    printf ("Enter y \n");
//    scanf("%d",&y);
//    int operation;
//    printf("choose the operation: \n");
//    printf("1.+\n2.-\n3.*\n4./\n");
//    scanf ("%d", &operation);
//    int res;
//    switch (operation) {
//        case 1 :
//            res= x+y ;
//            printf("%d \n",res);
//            break;
//
//        case 2 :
//            res= x-y;
//            printf("%d \n",res);
//            break;
//
//        case 3 :
//            res= x*y;
//            printf("%d \n",res);
//            break;
//
//        case 4 :
//            res= x/y;
//            printf("%d \n",res);
//            break;
//    }
//    printf("Thanks for using Mohammad Moamin calculator");
//}



//int main(){
//    int i = 5;
//    printf("%d",i%2);
//    return 0;
//}



//int main(){
//
//    int count = 0 ;
//    printf("1 ");
//
//    printf("1 ");
//    while (count<20)
//    {
//        printf("2 ");
//        count = count +1;
//        printf("5 ");
//
//    }
//}


// First question
//int main(){
//    int a,b ;
//    printf("Enter The First Number: \n");
//    scanf("%d", &a);
//    printf("Enter The Second Number: \n");
//    scanf("%d", &b);
//    printf("The Sum Is: %d",a+b);
//    printf("The Product Is: %d",a*b);
//    printf("The Difference Is: %d",a-b);
//    printf("The Quotient Is: %d",a/b);
//    printf("The Reminder Is: %d",a%b);
//}


// Second question
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
int main(){
    // get input from user a, b to compare it later
    int a, b ;
    // print statement for user to input first value
    printf("Enter The First Number \n");
    // the next line to input the first value
    scanf("%d", &a);
    // print statement for user to input second value
    printf("Enter The Second Number \n");
    // the next line to input the first value
    scanf("%d",&b);
    // start comparing it
    if(a>b){
        printf("%d is grater than %d", a,b);
    } else if(b>a){
        printf("%d is grater than %d ",b,a);
    } else if(a ==b  ){
        printf("%d equal %d",a,b);
    }
    else {
        printf("%d isn't equal %d",a,b);
    }
}


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
        printf("A is the better");
    }if(b>a && b>c){
        printf("B is the better");
    }if(c>a && c>b){
        printf("C is the better");
    }else{
        // when the program can't compare will print the next statement
        printf("Something won't wrong please try again");
    }

}

