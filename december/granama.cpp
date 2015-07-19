#include<iostream>
using namespace std;
int main()
{
    int t;
    char a[1001],b[1001];
    scanf("%d",&t);
    while(t--)
    {
      scanf("%s %s",a,b);
      sort(a,a+strlen(a));
      sort(b,b+strlen(b));
      if(strcmp(a,b))
      printf("NO\n");
      else
      printf("YES\n");
    }
    return 0;
}
