#include<iostream>
using namespace std;
int main()
{
    long long n,m,a,t=0;
    cin>>n>>m>>a;
    t=(n/a)+(m/a);
    if((n%a)!=0)
    t+=1;
    if((m%a)!=0)
    t+=1;
    cout<<t<<endl;
    return 0;
}
