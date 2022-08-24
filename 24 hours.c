#include<stdio.h>
#include<string.h>
int main()
{
    int H, M, S;                         /*H-hours M-minute S-second*/
    char a[3];

    printf("This program will convert Standard time (12:00) to Military time (24:00)\n\n");
    printf("Enter Hour (1-12): ");
    scanf("%d", &H);
    printf("\nEnter Minutes(0-59): ");
    scanf("%d", &M);
    printf("\nEnter Seconds(0-59): ");
    scanf("%d", &S);
    printf("\nEnter  'am' or 'pm': ");
    scanf("%s", &a);

    if(H <= 12 && M <= 59 && S <= 59){
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0)
           && (H != 0) && (H != 12))
        {
            H = H + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (H == 12))
        {
            H = 0;
        }
        printf("\n\nTime converted:  ");
        printf("%02d:%02d:%02d \n\n", H, M, S);

    }
    else
    {
        printf("\n\nINVALID ENTRY\n\n");
    }
    return 0;
}
