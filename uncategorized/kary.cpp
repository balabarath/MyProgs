#include<iostream>
#include<math.h>
using namespace std;
long long numberOfNodes(long n, long k)
{
     long long int nodes = 0;
     long i = 0;
     for(;i <= n ; i++)
     {
            nodes +=(long long)pow(k, i);
     }
     return nodes;
}
int main()
{
    int t, n, k;
    long long int nodes = 0;
    long w;
    cin>>t;
    while( t-- )
    {
           cin>>k>>n;
           nodes = numberOfNodes(n, k);
           cout<<"...."<<nodes<<endl;
           w = 0;
           while(nodes > 0)
           {
                w += nodes%10;
                nodes /= 10;
           }
           cout<<w<<endl;
    }
}
