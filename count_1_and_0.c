//PROGRAM TO COUNT NUMBER 0's AND 1's IN A NUMBER


#include <stdio.h>

int main()
{
    int num=64,zeros,ones,i;

    zeros=0;
    ones=0;

    for(i=0;i<32;i++)
    {
        if(num&1)
        {
            ones++;
        }
        else
        {
            zeros++;
        }
        
        num=num>>1;
    }

    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}