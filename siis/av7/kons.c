#include<stdio.h>

int main()
{
    int n, iznos, i, m, j;
    char danok;
    float ddv=0;

    scanf("%d",&m);

    for(j=0; j<m; j++)
    {

        scanf("%d",&n);
        ddv = 0;
        int sum = 0 ;
        for(i=0; i<n; i++)
        {
            scanf("%d %c",&iznos, &danok);
            // scanf("%c",&danok);
            // printf("%d %c\n", iznos, danok);
            //scanf("%c",&danok);

            //  printf("iznos e %d so %c danok\n",iznos,danok);

            if(danok=='A')
                ddv+=iznos*0.18*0.15;
            if(danok=='B')
                ddv+=iznos*0.05*0.15;
            if(danok=='V')
                ddv+=0;
            // printf("ddv=%d\n",ddv);
        }
        if(ddv>30000)
            printf("Sum %d is bigger than 30000\n",ddv);
        else
            printf("Total tax return is: %.2f\n",(15*ddv)/100);
        ddv=0;
    }
}

