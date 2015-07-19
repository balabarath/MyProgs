#include <stdio.h>
int min(int x,int y)
{
 if(x<y)
 return x;
 return y;
}
int main()
{
	int t,n,y1,o1,p1,y2,o2,p2;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d %d %d %d",&n,&y1,&o1,&p1);
      while(--n)
      {
       y2=y1;
       o2=o1;
       p2=p1;
       scanf("%d %d %d",&y1,&o1,&p1);
       y1+=min(o2,p2);
       o1+=min(p2,y2);
       p1+=min(o2,y2);
      // printf("%d %d %d\n",y1,o1,p1);
      }
      printf("%d\n",min(y1,min(o1,p1)));
    }
    return 0;
}
