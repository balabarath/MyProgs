/*
ID: balabrath
PROG: gift1
LANG: C++
*/
#include<iostream>
#include<fstream>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main()
{
    map<string,int> name;
    vector<string> names;
    map<string,int>::iterator imap;
    vector<string>::iterator ivector;
    int t,i,tot,no,j;
    string chum,chuk;
    ifstream fin("gift1.in");
    ofstream fout("gift1.out");
    fin>>t;
    for(i=0;i<t;i++)
    {
     fin>>chum;
     names.push_back(chum);
     name[chum]=0;
    }
    for(i=0;i<t;i++)
    {
     fin>>chum;
     fin>>tot>>no;
     if(no==0)
     continue;
     name[chum]+=((tot%no)-(tot));
     for(j=0;j<no;j++)
     {
      fin>>chuk;
      name[chuk]+=(tot/no);
     }
    }
    for(ivector=names.begin();ivector!=names.end();ivector++)
    {
     fout<<*ivector<<" "<<name[*ivector]<<endl;
    }
    return 0;
}
