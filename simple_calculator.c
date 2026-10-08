#include <stdio.h>

int main() {

    printf("\n===> SIMPLE CALCULATOR <===\n");

    int num1 , num2;
    char opt;
    printf("Enter number1\n");
    scanf("%d" , &num1);

    printf("Enter operator : (+ , - , * , /)\n");
    scanf(" %c" , &opt);

    printf("Enter number2\n");
    scanf("%d" , &num2);

    switch(opt)
    {
        case '+':
        printf("Number1 + Number2 = %d" , num1 + num2);
        break;

        case '-':
        printf("Number1 - Number2 = %d" , num1 - num2);
        break;

        case '*':
        printf("Number1 * Number2 = %d" , num1*num2);
        break;

        case '/':
        printf("Number1 / Number2 = %d" , num1/num2);
        break;

        default : 
        printf("Invalid operator");
    }

    return 0;
}