#include<iostream>
using namespace std;
#define  ll long double
ll num=0;
int n,r,t;
ll c(n,r) {
    if(r==0)
        return 1;
    else {
        num =(long long) n * c(n - 1, r - 1);
        return num/r;
    }
}
int main()
{
    
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d %d",&n,&r);
    cout<<c(n,r);
     
    }
    scanf("%d");
    return 0;
}

