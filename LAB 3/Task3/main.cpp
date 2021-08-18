#include <stdio.h>
#include <stdlib.h>


int main()

{

    float sum;
    int i, n;
    float nums[20];
    float product;
    float average;


    printf("\nWelcome to my average of sum calculator: ");
    printf("\nEnter the number of numbers (n < 20): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        printf("\nEnter the %d-th number: ", i+1);
        scanf("%f", &nums[i]);
    }

    sum = 0;
    product = 1;

    for (i = 0; i < n; i++)

    {
        sum += nums[i];
        product*= nums[i];
    }
    average=sum/n;
    printf("\n The average is %f\n",  average);
    printf("\n the product is%f\n",product);
    printf("\n Welcome to my average of sum calculator%f\n",sum);


    return(EXIT_SUCCESS);
}
