//23/05/12 02:29
/* 

Problem Statement
    
***Note:  Please keep programs under 7000 characters in length.  Thank you


Class Name: SquareDigits
Method Name: smallestResult
Parameters: int
Returns: int

Define the function S(x) as the sum of the squares of the digits of x.   
For example: S(3)=3*3=9 and S(230)=2*2+3*3+0*0=13.

Define the set T(x) to be the set of unique numbers that are produced by
repeatedly applying S to x.  That is: S(x), S(S(x)), S(S(S(x))), etc... 
For example, repeatedly applying S to 37:
S(37)=3*3+7*7=58.  
S(58)=5*5+8*8=89.
S(89)=145.
S(145)=42. 
S(42)=20.
S(20)=4.
S(4)=16.
S(16)=37. 
Note this sequence will repeat so we can stop calculating now and: 
T(37)={58,89,145,42,20,4,16,37}.
However, note T(x) may not necessarily contain x.  

Implement a class SquareDigits, which contains a method smallestResult.  The
method takes an int, n, as a parameter and returns the smallest int, x, such
that T(x) contains n.

The method signature is (be sure your method is public): 
int smallestResult(int n); 

TopCoder will ensure n is non-negative and is between 0 and 199 inclusive.

Examples:
If n=0: S(0) = 0, so T(0)={0}, so the method should return 0.

If n=2: T(0) through T(10) do not contain the value 2.  If x=11, however:
S(11)=1*1+1*1=2, so T(11) contains 2, and the method should return 11.

If n=10: T(0) through T(6) do not contain 10.  If x=7:
S(7)=49.
S(49)=97.
S(97)=130.
S(130)=10.
S(10)=1.
and it starts to repeat... 
so T(7) is {49,97,130,10,1}, which contains 10, and the method should return 7.

n=1 -> x=1 
n=19 -> x=133
n=85 -> x=5
n=112 -> x=2666
Definition
    
Class:
SquareDigits
Method:
smallestResult
Parameters:
int
Returns:
int
Method signature:
int smallestResult(int param0)
(be sure your method is public)
    

This problem statement is the exclusive and proprietary property of TopCoder, Inc. Any unauthorized use or reproduction of this information without the prior written consent of TopCoder, Inc. is strictly prohibited. (c)2003, TopCoder, Inc. All rights reserved.
*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class SquareDigits {
public:
	int smallestResult(int);
	int sum(int);
	int j,k,a[1000];
};

int SquareDigits::sum(int num)
{
 j=0;
 k=1;
 int i1,temp,s=0,i2;
 temp=num;
 while(1)
 {
 for(i1=0;i1<k;i1++)
 if(a[i1]==num)
 return 0;
 for(i1=0;i1<k;i1++)
 for(i2=i1+1;i2<k;i2++)
 if(a[i2]==a[i1])
 return 0;
 while(temp>0)
 {
  s=s+(temp%10)*(temp%10);
  temp/=10;
 }
 j++;
 a[j]=s;
 temp=s;
 s=0;
 k++;
 }
}
int SquareDigits::smallestResult(int n) {
int i,j1;
k=j1=0;
i=2;
if(n==0)
return 0;
if(n==1)
return 1;
for(;;)
{
 j=0;
 sum(i);
 for(j1=0;j1<k-1;j1++)
 {
  if(a[j1]==n)
  return i;
 }
 i++;
}	
}
<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
