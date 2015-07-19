#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
 list<int> l;
 list<int>::iterator I;
void print()
{
   for(I=l.begin();I!=l.end();I++)
    printf("%d\t",*I);  
    printf("\n\n");
}
int main()
{
    int t,i,j,m,n,min,temp,a[2012];
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     scanf("%d",&temp);
     l.push_back(temp);
     }
     l.sort();
     l.unique();
     
     for(I=l.begin(),i=0;I!=l.end();I++,i++)
     {
      a[i]=*I;
      printf("%d \n",i);
     }
     l.clear();
     
     
     scanf("%d",&m);
    // int b[m];
    for(i=0;i<m;i++)
     {
     scanf("%d",&temp);
     l.push_back(temp);
     }
     l.sort();
     l.unique();
     //printf("\n\n");
     for(I=l.begin(),i=n;I!=l.end();I++,i++)
     {
      
      a[i]=*I;
     printf("%d \n",i);
     }
     printf("\n\n");
     n=i;
    // printf("%d \nx",i);
     //l.clear();
     sort(a,a+n);
     //sort(b,b+m);
     
    // for(i=0;i<n;i++)
    // printf("%d\n",a[i]);
     min=a[1]-a[0];
     i=2;
     while(i<n)
     {
      if(min==0)
      break;
      if((a[i]-a[i-1])<min)
      min=temp;
      i++;
     }
     printf("\n-->%d\n",min);
   //  printf("\n\n");
    }
    return 0;
}
