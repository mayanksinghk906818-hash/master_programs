#include <stdio.h>

int main() {

    printf("\n===> MULTIPLICATION TABLE <===\n");

    int num , table;
    printf("Enter number\n");
    scanf("%d" , &num);

    for(int i=1; i<=10; i++)
    {
        table = num * i;
        printf("%d X %d = %d\n" , num , i , table);
    }

    return 0;
}