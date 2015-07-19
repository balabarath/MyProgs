#include<stdio.h>
#include<list>
#include<math.h>
using namespace std;
#define forn(i,n) for(i=2;i<=n;i++)
//#define end scanf("%d")
int main()
{
    list<long long int> v;
    list<long long int>::iterator I;
    long long n,sqr,i;
    scanf("%lld",&n);
    sqr=(int)sqrt(n);
    forn(i,sqr)
    {
      
      if(n%i==0){
       // printf("%d  ",i);
        v.push_back(i);
        v.push_back(n/i);   
      }     
    }
    v.unique();
    v.sort();
    for(I=v.begin();I!=v.end();I++)
    printf("%lld ",*I);
    scanf("%d");
    return 0;
}
