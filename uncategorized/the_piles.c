#include<stdio.h>
int main()
{
    int t,n,s,f=0; 
    long tot;
    scanf("%d",&t);
    while(t--)
    {
        tot=0;
             
        scanf("%d",&n);
        while(n--) 
        {
            scanf("%d",&s);
            tot+=s; 
        }
        if(f==0)
        {
            if(tot%2==0)
            printf("BOB\n");
            else
            printf("ALICE\n"); 
            f=1;      
        }
        else
        {
            if(tot%2==1)
            printf("BOB\n");
            else
            printf("ALICE\n"); 
            f=0;
        }
  }
  scanf("%d");
    return 0;
}
