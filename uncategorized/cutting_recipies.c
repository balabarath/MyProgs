//06/05/12 23:51
/*Cutting Recipes
Problem code: RECIPE
	
SUBMITMY SUBMISSIONSALL SUBMISSIONS
All submissions for this problem are available.

The chef has a recipe he wishes to use for his guests, but the recipe will make 
far more food than he can serve to the guests. The chef therefore would like to
 make a reduced version of the recipe which has the same ratios of ingredients,
  but makes less food. The chef, however, does not like fractions. The original
   recipe contains only whole numbers of ingredients, and the chef wants the 
   reduced recipe to only contain whole numbers of ingredients as well. Help the
    chef determine how much of each ingredient to use in order to make as little
     food as possible.
Input

Input will begin with an integer T, the number of test cases. Each test case
 consists of a single line. The line begins with a positive integer N, the
  number of ingredients. N integers follow, each indicating the quantity of a
   particular ingredient that is used.
Output

For each test case, output exactly N space-separated integers on a line, giving 
the quantity of each ingredient that the chef should use in order to make as 
little food as possible.
Sample Input
3
2 4 4
3 2 3 4
4 3 15 9 6
Sample Output

1 1
2 3 4
1 5 3 2
Constraints

T=100
2=N=50
All ingredient quantities are between 1 and 1000, inclusive.*/
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int t,n,i,s,a[1000];
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      scanf("%d",&a[0]);
      s=a[0];
      for(i=1;i<n;i++)
      {
       scanf("%d",&a[i]);
       s=gcd(s,a[i]);
      // printf("%d",s);
      }
     for(i=0;i<n;i++)
     printf("%d ",a[i]/s);
    }
  //  scanf("%d");
    return 0;
} 
