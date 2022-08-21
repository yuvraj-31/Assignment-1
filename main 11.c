#include <stdio.h>

int main()
{   
    int Hour;
    int Minute;
    
    printf("Enter time is in format of HH:MM\n");
    scanf("%d:%d",&Hour,&Minute);
    printf("%d hour and %d minutes",Hour,Minute);
    
    
    return 0;
}
