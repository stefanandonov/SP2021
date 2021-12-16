#include<stdio.h>
int main()
{
    int broj;
    while(scanf("%d", &broj))
    {
        int temp=broj;
        int brcifri=0, brojacdeliteli=0;
        while(temp>0)
        {
            brcifri++;
            temp/=10;
        }
        for(int j=1;j<=broj;j++)
        {
            if(broj%j==0)
            {
                brojacdeliteli++;
            }
        }
        //printf("%d %d %d\n", broj, brcifri, brojacdeliteli);
        if(brcifri==brojacdeliteli)
        {
            printf("%d\n", broj);
        }
    }
    return 0;
}