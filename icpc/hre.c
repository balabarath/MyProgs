#include<stdio.h>
main()
{
      int i,n;
      printf("Enter the value of n:\t");
      scanf("%d",&n);
      for(i=1;i<=n;i+=2)
      {
       printf("%d ",i);
      }
     getch();
     return 0;
}
