#include<stdio.h>
int main()
{
    int a[5][5]={0},sum[5]={0};
    int i=0,j=0,max,lo=0;
    sum[i]=0;
     for(i=0; i<5; i++)
    {
         sum[i]=0;
         for(j=0; j<4; j++)
        {
        scanf("%d",&a[i][j]);
        if(a[i][j]>=0&&a[i][j]<=5)
        sum[i]=sum[i]+a[i][j];
        }
    }

    max = sum[0];
    for(i=0; i<4; i++)
      {
          if(max<sum[i])
          {
              max = sum[i];
              lo=i;
          }

      }

   printf("%d %d",lo+1,max);


    return 0;
}
