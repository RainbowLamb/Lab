#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int day, month, year, a, m, y, r;

    printf("Day\n");
    scanf("%d",&day);
    
    printf("Month\n");
    scanf("%d", &month);
    
    printf("Year\n");
    scanf("%d", &year);
    
    a =(14 - month) / 12;
    y = year - a;
    m = month + 12 * a - 2;
    r = 7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
    r = r % 7;
    
    switch(r)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 0:
            printf("Sunday\n");
            break;
    }


    return 0;
}
