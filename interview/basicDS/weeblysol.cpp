#include <stdio.h>

int main()
{
    int t, n, k, i, d1, d2, num[2];
    scanf("%d", &t);
    while(t--)
    {
    	scanf("%d %d", &n, &k);
    	if(k > 81)
    	{
    		printf("-1\n");
    		continue;
    	}
    	d1 = k/10;
    	d2 = k %10;
    	num[0] = k / 9;
    	if( k%9 != 0)
    	{
    		num[0]++;
    	}
    	num[1] = d2+d1;
    	if(d1 > d2)
    	{
    		num[1]--;
    	}
    	num[1] %= 10;
    	for(i = 0; i < n ; i++)
    		printf("%d %d",k, num[i%2]);
        //printf("%d %d %d %d", d1, d2, num[0], num[1]);
    	printf("\n");
    }
    return 0;
}
