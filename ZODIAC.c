#include<stdio.h>
#include<conio.h>
int main()
{
    int day, month, year;

    printf("This Program will help you to identify your Zodiac Sign\n\n");


    printf("Please Enter your Birth Day (1 to 31): ");
    scanf("%d", &day);

    printf("\nPlease Enter your Birth Month(1 to 12): ");
    scanf("%d", &month);

    printf("\nZodiac Sign:  ");


    //  Aquarius
    if(month == 1 && day>=20 && day<=31 || month == 2 && day<=18 && day>0)
        printf("Aquarius \n");

    //  Pisces
    else if(month == 2 && day>=19 && day<=29 || month == 3 && day<=20 && day>0)
        printf("Pisces \n");

    //  Aries
    else if(month == 3 && day>=21 && day<=31 || month ==4  && day<=19 && day>0)
        printf("Aries \n");

    // Taurus
    else if(month == 4 && day>=20 && day<=30 || month == 5 && day<=20 && day>0)
        printf("Taurus \n");

    // Gemini
    else if(month == 5 && day>=21 && day<=31 || month == 6 && day<=21 && day>0)
        printf("Gemini \n");

    // Cancer
    else if(month == 6 && day>=22 && day<=30 || month == 7 && day<=22 && day>0)
        printf("Cancer \n");

    // Leo
    else if(month == 7 && day>=23 && day<=31 || month == 8 && day<=22 && day>0)
        printf("Leo \n");

    // Virgo
    else if(month == 8 && day>=23 && day<=31 || month == 9 && day<=22 && day>0)
        printf("Virgo \n");

    // Libra
    else if(month == 9 && day>=23 && day<=30 || month == 10 && day<=23 && day>0)
        printf("Libra \n");

    // Scorpio
    else if(month == 10 && day>=24 && day<=31 || month == 11 && day<=21 && day>0)
        printf("Scorpio \n");

    //  Sagittarius
    else if(month == 11 && day>=22 && day<=30 || month == 12 && day<=21 && day>0)
        printf("Sagittarius \n");

    // Capricorn
    else if(month == 12 && day>=22 && day<=31 || month == 1 && day<=19 && day>0)
        printf("Capricorn \n");

    else
        printf("\n\nInvalid Entry\n\n");

}
