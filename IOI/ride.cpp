/*
ID: balabarath
PROG: ride
LANG: C++
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char a[1000],b[1000];
    long long int mod1=1,mod2=1,i;
    fin>>a>>b;
    for(i=0;a[i]!='\0';i++)
    mod1*=(a[i]-64);
    for(i=0;b[i]!='\0';i++)
    mod2*=(b[i]-64);
    //cout<<mod1<<" "<<mod2;
    if(mod1%47==mod2%47)
    fout<<"GO";
    else
    fout<<"STAY"; 
    fout<<"\n";
    //scanf("5d");
    return 0;
}
