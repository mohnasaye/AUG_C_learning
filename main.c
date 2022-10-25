#include <stdio.h>
//
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

int main(){
    int sub1,sub2,sub3,hs1,hs2,hs3;
    printf("Enter Sub1, hs1, sub2, hs2, sub3, hs3 \n");
    scanf("%d %d %d %d %d %d",&sub1,&hs1,&sub2,&hs2,&sub3,&hs3);
    printf("Your avg is: %d",(sub1*hs1+sub2*hs2+sub3*hs3)/3);

}