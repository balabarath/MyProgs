#include<stdio.h>
int pascal(int r, int c) {
  if (c==0 || c==r) {
    return 1;
  } else {
    return pascal(r-1,c-1) + pascal(r-1,c);
  }
}
int main()
{
    int i,j,k1,k2,n;
    scanf("%d",&n);
    i=j=n;
    for(i=0;i<n;i++)
    {
     k2=n-i-1;
     for(k1=0;k1<k2;k1++)
     printf(" ");
     for(j=0;j<=i;j++)
     {
       printf("%d",pascal(i,j));
       if(j<i)
       printf("*");
     }
     printf("\n");  
    }
    return 0;
}

