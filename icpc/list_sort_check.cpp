#include<stdio.h>
#include<time.h>
#include<list>
#define forn(i,n) for(i=n;i;i--) 
using namespace std;
int main()
{
   long long  i,n;
   time_t s,e;
    list<long long int> l;
    list<long long int>::iterator I;
    scanf("%lld",&n);
    s=time(NULL);
    forn(i,n)
    {
      l.push_back(i);
    }
    l.sort();
    e=time(NULL);
    printf("%f",difftime(s,e));
    /*for(I=l.begin();I!=l.end();I++)
    {
      printf("%lld ",*I);
    }*/
    scanf("%d");
     return 0;
}
