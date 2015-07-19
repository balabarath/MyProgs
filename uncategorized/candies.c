/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#define max(x,y) x>y?x:y
#include<stdio.h>
int main()
{
    int n,i,j;
    long c1=0,c2,t=0;
    long long c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>t){
            c1++;
            t=a[i];
            printf("%d %d\n",c1,a[i]);
            c+=c1;
        }
        else
        {
            c2=0;
           c=c+c1*(c1+1)/2-c1;
         //  printf("               ==%d\n",c1);
            j=i;
            c-=c1;
            //printf("                %d\n",c);
            while(a[j]<t)
            {
                c2++;
                j++;
               printf("             =%d\n",c2);
                c+=c2;
                printf("                %d\n",c);
            }
            c+=(max(c1,c2)+1);
            c1=1;
            printf("i=%d j=%d",i,j);
            i=j;
            printf("                %d\n",c);
        }
        
    }
  printf("%d",c);
  //scanf("%d");
    return 0;
}
