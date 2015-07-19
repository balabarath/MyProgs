//Find the sum of all the multiples of 3 or 5 below 1000.
#include<stdio.h>
int main()
{
    int i,n=1000;
    long sum=0;
    for(i=3;i<1000;i++)
    if(!(i%3)||!(i%5))
    sum+=i;
    printf("%ld",sum);
    scanf("%d");
    return 0;
} 
