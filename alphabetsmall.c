#include <stdio.h>//a ab abc
main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4c",'a'+j-1);
        }
        printf("\n");
    }
    return 0;
}