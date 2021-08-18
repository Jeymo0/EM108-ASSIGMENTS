#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
 float h, v, x, y, t, In_h;

 printf("Welcome to my projectile motion calculator!\n");

 printf("\nEnter initial height:\n");
 scanf("%f", &In_h);
 printf("Enter initial horizontal velocity:\n");
 scanf("%f", &h);
 printf("Enter Initial Vertical Velocity:\n");
 scanf("%f", &v);

 printf("\nTime\t\tX Distance\tY Distance\n");
 for (t= 0; t <= 5; t)
                      {
                       x = h*t ;
                       y = In_h+((v*t)+(t*t)*(-9.81));
                       if (y <= 0)
                      {
 break;


 }
 printf("%1.3f\t\t%3.3f\t\t%3.3f \n\n", t, x, y);
 t=t+0.05;
 }

 printf("\nGoodbye from the most Advanced Projectile Motion Calculator!!\n");

 return(0) ;
}
