#include <stdio.h>

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


// creating bmi calculator
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


int main(){
    int x,y;
    printf("Enter x \n");
    scanf("%d",&x);
    printf ("Enter y \n");
    scanf("%d",&y);
    int operation;
    printf("choose the operation: \n");
    printf("1.+\n2.-\n3.*\n4./\n");
    scanf ("%d", &operation);
    int res;
    switch (operation) {
        case 1 :
            res= x+y ;
            printf("%d \n",res);
            break;

        case 2 :
            res= x-y;
            printf("%d \n",res);
            break;

        case 3 :
            res= x*y;
            printf("%d \n",res);
            break;

        case 4 :
            res= x/y;
            printf("%d \n",res);
            break;
    }
    printf("Thanks for using Mohammad Moamin calculator");
}