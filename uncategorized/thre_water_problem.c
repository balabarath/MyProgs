/*

Water Problem
Problem code: A102
	
MY SUBMISSIONSALL SUBMISSIONS
All submissions for this problem are available.

There is a small town in the mid of the Thar Desert which suffers from water scarcity. The town has a 10000 gallon water tank to which water is transported on a priodic basis. However the population in the town keeps varying as people go outstation for work and so the rquirement of water also varies. Therefore it is required that they know well in advance when they would need the next supply on the basis of current consumtion rate. They need a program which actually tells tem how many weeks will the water in the tank last with current consumption rate.
Input

The data set is on a single line. There are an unknown no of integers in the data set. The integer 0 is used to indicate the end of the data.
Output

Use all upper case letters.The output is to be formatted exactly like that of the sample output given below. Assumptions:The weekly usage does not exceed 10000 gallons. The 0 used to represent end of data is not the part of data for the problem. Discussion:Do not include the last week if the water remaining for that week is less than the weekly usage amount.
Example

Input:
 1750 1000 0

Output:
1750 GALLONS PER WEEK WILL LAST 5 WEEKS
1000 GALLONS PER WEEK WILL LAST 10 WEEKS
*/
//01/05/12 15:07
#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
     scanf("%d",&n);
     if(n==0)
     break;
     printf("%d GALLONS PER WEK WIL LAST %d WEEKS\n",n,10000/n);
    }
    scanf("%d");
    return 0;
} 
//01/05/12 15:12

