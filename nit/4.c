#include<stdio.h>
int main()
{
    int n,m,a,t1,t2;;
    scanf("%d %d %d",&n,&m,&a);
    t1=(n/a);
     if((n%a)!=0)
     t1++;
    
    t2=(m/a);
    if((m%a)!=0)
    t2++;
    
    printf("%d",t1*t2);
    return 0;
}
