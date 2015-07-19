#include<stdio.h>
int main()
{
    int t,n,ones,twos,threes,fours,taxi=0;
    ones=twos=threes=fours=0;
    scanf("%ld",&t);
    while(t--)
    {
      scanf("%ld",&n);
      switch(n)
      {
        case 1:
             ones++;
             break;
        case 2:
             twos++;
             break;
        case 3:
             threes++;
             break;
        case 4:
             fours++;
             break;
      }
    }
    taxi=fours;
    taxi+=threes;
    if(threes>ones)
    {
     ones=0;
    }
    else 
    {
     ones-=threes;
    }
    taxi+=(twos/2);
    if(twos%2)
    {
     taxi++;
     if(ones>=2)
     {
      ones-=2;
     }
     else if(ones)
     ones--;
    }
    //printf("%     ld   ",ones);
    taxi+=(ones/4);
    if(ones%4)
    taxi++;
    printf("%ld",taxi);
  //  scanf("%d");
    return 0;
}
