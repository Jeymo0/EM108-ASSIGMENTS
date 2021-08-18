#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("COLOR 0C");
    /* declarations */
    float average, num1, num2, num3,product;
    /* input data */
    printf("Welcome to ,my average programme!");
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("\nEnter second number: ");
    scanf("%f", &num2);
    printf("\nEnter third number: ");
    scanf("%f", &num3);
    average = (num1 + num2 + num3) / 3;
    printf("\nThe average is: %f\n", average);
    if ((num1>=num2)&&(num1>=num3)){
        printf("\nThe max is: %f\n", num1);
    }
    else if((num2>=num1)&&(num2>=num3)){
        printf("\nThe max is: %f\n", num2);
    }
    else if((num3>=num1)&&(num3>=num2)){
        printf("\nThe max is: %f\n", num3);
    }
    if((num1<=num2)&&(num1<=num3)){
        printf("\nThe minimum is: %f\n", num1);
    }
    else if((num2<=num1)&&(num2<=num3)){
        printf("\nThe minimum is: %f\n", num2);
    }
    else if((num3<=num1)&&(num3<=num2)){
        printf("\nThe minimum is: %f\n", num3);
    }
    product=(num1*num2*num3);
    printf("\nThe product is: %f\n", product);

    return(EXIT_SUCCESS);
}
