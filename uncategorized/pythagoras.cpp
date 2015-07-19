#include<iostream>
using namespace std;
/*int issquare(long long number)
{
    int sqr = sqrt(number);
    if(sqr*sqr == number)
      return 1;
    return 0;
      
}*/
int istriple(long long i, long long j, long long n)
{
    for(int k=j+1; k<=n)
       return 1;
    return 0;
}
int main()
{
    int i,j,t,n,max,count;
    cin>>t;
    while(t--)
    {
              max = count = 0;
              cin>>n;
              max = n*n;
              for(i=1;i<=n;i++)
              {
                 for(j=i+1;j<=n;j++)
                 {
                   if (istriple(i,j,n))
                 }
              }
    }
    return 0;
}
