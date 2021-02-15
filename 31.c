#include<stdio.h>
int main()
{
    int a[5]={0},b[5]={0},c[5]={0},d[5]={0},e[5]={0};
    int i=0,j=0;
    for(i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0&&a[i]<=5)
        continue;
    }
    for(i=0; i<4; i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>=0&&b[i]<=5)
        continue;
    }
    for(i=0; i<4; i++)
    {
        scanf("%d",&c[i]);
        if(c[i]>=0&&c[i]<=5)
        continue;
    }
    for(i=0; i<4; i++)
    {
        scanf("%d",&d[i]);
        if(d[i]>=0&&d[i]<=5)
        continue;
    }
    for(i=0; i<4; i++)
    {
        scanf("%d",&e[i]);
        if(e[i]>=0&&e[i]<=5)
        continue;
    }


    return 0;
}
