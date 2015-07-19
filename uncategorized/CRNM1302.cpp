#include<stdio.h>
#include<iostream>
//#include<vector>
using namespace std;
int main()
{
    short int t;
    int n,m,k,no,i,j,min,index;
    //vector<int> gifts,gfts;
    long long sum;
    scanf("%u",&t);
    while(t--)
    {
     sum=0;
     scanf("%d %d %d",&n,&m,&no);
     int a[n][m],num[n],pos[n][2],laspos[n],w[n];
     for(i=0;i<n;i++){
      w[i]=0;
     for(j=0;j<m;j++){
     scanf("%d",&a[i][j]);
     w[i]+=a[i][j];
     }
     }
     for(i=0;i<n;i++)
     {
       if(a[i][0]>=a[i][m-1])
       {
         num[i]=a[i][m-1];
         a[i][m-1]=999999;
         pos[i][0]=0;
         if(m==1){
         pos[i][1]=laspos[i]=0;}
         else{
         pos[i][1]=laspos[i]=m-2;}
         
       }
       else
       {
         num[i]=a[i][0];
         a[i][0]=999999;
         if(m==1){
         pos[i][0]=laspos[i]=0;}
         else{
         pos[i][0]=laspos[i]=1;}
         pos[i][1]=m-1;
         
       }
     }
     
     while(no--)
     {
       min=999999;
       for(i=0;i<n;i++)
       {
         if(num[i]<min)
         {
           min=num[i];
           index=i;
         }
         else if(num[i]==min)
         {
          if(laspos[i]<laspos[index])
          index=i;
          else if(laspos[i]==laspos[index])
           if(w[i]<w[index])
           index=i;
         }
       }
       sum+=num[index];
       if(a[index][pos[index][0]]<=a[index][pos[index][1]])
       {
         num[index]=a[index][pos[index][0]];
         a[index][pos[index][0]]=999999;
         laspos[index]=++pos[index][0];
       }
       else
       {
         num[index]=a[index][pos[index][1]];
         a[index][pos[index][1]]=999999;
         laspos[index]=--pos[index][1];
       }
     }
     cout<<sum<<endl;
    }
    return 0;
}
