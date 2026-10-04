#include <stdio.h>
int factorial(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return factorial(n-1) * n;
    }
}

int main() {

    int num;
    printf("Enter number\n");
    scanf("%d" , &num);

    printf("---> The Factorial <---\n");
    printf("%d" , factorial(num));


    return 0;
}