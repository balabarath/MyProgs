/*
ID: balabarath
PROG: friday
LANG: c++
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("friday.in");
    ofstream fout("friday.out");
    int n,i,l=0,su,mo,tu,we,th,fr,sa;
    fin>>n;
    for(i=1900;i<=(1900+n);i++)
    { 
     l+=365;
     if(i%100)
     {
      if(i%400==0)
      l++;
     }
     else
     {
      if(i%4==0)
      l++;
     }
    }
    
    return 0;
}
