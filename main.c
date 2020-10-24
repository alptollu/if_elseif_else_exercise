#include <stdio.h>

int main() {
    int main_number,number1,number2;

    printf("Please enter a main number:\n");
    scanf("%d",&main_number);

    printf("Please enter a number which will divide our main number:\n");
    scanf("%d",&number1);

    printf("Please enter second number which will divide our main number:\n");
    scanf("%d",&number2);

    if((main_number%number1==0) && (main_number%number2==0))
        {
            printf("%d is a multiply both of %d and %d!!!\n",main_number,number1,number2);
        }

    else if(main_number%number1==0)
    {
        printf("%d is only a multiply of %d!!!\n",main_number,number1);
    }
    else if(main_number%number2==0)
    {
        printf("%d is only a multiply of %d!!!",main_number,number2);
    }
    else
    {
        printf("%d is not a multiply of %d or %d",main_number,number1,number2);
    }
    return 0;
}
