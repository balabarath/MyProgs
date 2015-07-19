/*
ChessBoard
Problem code: A103
	
MY SUBMISSIONSALL SUBMISSIONS
All submissions for this problem are available.

This problem would take a little of your brain and time,as most of is familiar with chess.In this You have determine how many squares of chessboard can be attacked by Knight by standing alone on the chessboard.You must remember that knight moves 2 square forward(horizontally or vertically)and than 1 square sideways(perpendicular to the first direction)
Input

The first no of test cases.Below this contains two character 1.first character is lowercase alphabet from "a" to "h" 2.Second character is no from "1" to "8". Above two specify the rank and file of the square in which knight is present
Output

The no of squares attacked by Knights
Example

Input:
3
a1
d4
g6

Output:
2
8
6
*/
//01/05/12 15:27
#include<stdio.h>
int main()
{
    short int n,c;
    int p1,p2;
    scanf("%d",&n);
    while(n--)
    {
      c=0;
      //printf("%c",a);
      if(getche()=='a')
      p2=1;
      else if(getche()=='b')
      p2=2;
      else if(getche()=='c')
      p2=3;
      else if(getche()=='d')
      p2=4;
      else if(getche()=='e')
      p2=5;
      else if(getche()=='f')
      p2=6;
      else if(getche()=='g')
      p2=7;
      else if(getche()=='h')
      p2=8;
      scanf("%d",&p1);
      printf("--->%d<---",p2);
      if(p1<7)
      c++;
      if(p1>2)
      c++;
      if(p2>2)
      c++;
      if(p2<7)
      c++;
      printf("%d\n",c*2);
    }
    scanf("%d");
    return 0;
}
