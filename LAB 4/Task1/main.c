#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)

{
    int clients,i;
    float average,total;
    printf("Welcome to my soccer ticket information table.\n");
    printf("How many clients bought tickets.\n");
    scanf("%d",&clients);
    int tickets[clients];
    for(i=0; i<clients; i++){
        printf("Please enter the number of tickets person %d bought:\n",i+1);
        scanf("%d",&tickets[i]);
        total = total+tickets[i];
    }
    printf("CLIENT NO.\t NO.TICKETS\n");
    for(i=0; i<clients;i++){
        printf("    %d\t\t",i+1);
        printf("      %d\n",tickets[i]);
    }
    average = total/clients;
    printf("The average number of tickets bought is: %.2f\n",average);


    printf("Thank you for using my ticket information table.\n");


    return(EXIT_SUCCESS);

}
