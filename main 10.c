#include <stdio.h>

int main()
{   
    int Day;
    int Month;
    int Year;
    printf("Enter the date is in format of DD/MM/YYYY\n");
    scanf("%d/%d/%d",&Day,&Month,&Year);
    printf("Day - %d, Month - %d, Year - %d",Day,Month,Year);
    
    
    return 0;
}
