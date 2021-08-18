#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
system("COLOR 0C");
float length,width,area,amount;

    printf("Welcome to my weed killing programme!");

    printf("\nPlease insert length");
    scanf("%f",&length);

    printf("\nPlease insert width");
    scanf("%f",&width);

    printf("\nPlease insert amount");
    scanf("%f",&amount);

    area=(length*3.28*width*3.28);
    printf("\nThe area in feet is: %f\n", area);

    amount=(area*amount);
    printf("\nThe amount of weed killer needed to cover the field is litres: %f\n", amount);

    printf("Goodbye,thank you for using my weed killing programme!");

 return(EXIT_SUCCESS);
}
