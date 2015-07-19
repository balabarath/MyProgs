#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<stdlib>
#include<string>
using namespace std;
int main()
{
    int n,t;
    scanf("%d",&n);t=n;
    register char a;
    while(t--){
     a=getchar_unlocked();
     printf("%c",a);
    }
    
    scanf("%d");
    return 0;
}
