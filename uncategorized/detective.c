/*
Once detective Saikat was solving a murder case. While going to the crime scene he took the stairs and saw that a number is written on every stair. He found it suspicious and decides to remember all the numbers that he has seen till now. While remembering the numbers he found that he can find some pattern in those numbers. So he decides that for each number on the stairs he will note down the sum of all the numbers previously seen on the stairs which are smaller than the present number. Calculate the sum of all the numbers written on his notes diary.

Input

First line gives T, number of test cases.

2T lines follow.

First line gives you the number of stairs N

Next line gives you N numbers written on the stairs.

Output

For each test case output one line giving the final sum for each test case.

Constraints

T<=10

1<=N<=10^5

All numbers will be between 0 and 10^6.

Example

Input:
1
5
1 5 3 6 4

Output:
15
*/
//28/04/12 22:43
#include<stdio.h>
int main()
{
short t;
long n,i,c,prev;
long a;
scanf("%d",&t);
while(t--)
{
  c=0; 
  scanf("%ld",&n);
  
  scanf("%ld",&prev);
  c=prev;
  for(i=1;i<n;i++)
  {
  scanf("%ld",&a);
  if(a==prev);
  else if(a>prev)
  c=c+(a-prev);
  else 
  c+=a;
  prev=a; 
  }
  printf("%ld\n",c);
}
scanf("%d");
return 0;
}




